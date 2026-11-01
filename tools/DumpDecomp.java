// Ghidra headless script: dumps C decompilation for every address in a file.
// Args: <addrs_file> <out_dir>  (addresses in hex, one per line)
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class DumpDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) { println("usage: <addrs_file> <out_dir>"); return; }
        Path addrsFile = Paths.get(args[0]);
        Path outDir    = Paths.get(args[1]);
        Files.createDirectories(outDir);

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        dec.setSimplificationStyle("decompile");

        List<String> lines = Files.readAllLines(addrsFile);
        int ok = 0, fail = 0;
        for (int i = 0; i < lines.size(); i++) {
            String h = lines.get(i).trim();
            if (h.isEmpty()) continue;
            long off = Long.parseLong(h, 16);
            Address a = currentProgram.getImageBase().add(off);
            Function f = getFunctionAt(a);
            if (f == null) f = getFunctionContaining(a);
            if (f == null) { fail++; continue; }
            DecompileResults r = dec.decompileFunction(f, 60, monitor);
            String body;
            if (r != null && r.getDecompiledFunction() != null) {
                body = r.getDecompiledFunction().getC();
            } else {
                body = "// decompile failed\n";
                fail++;
                continue;
            }
            Path out = outDir.resolve(String.format("%x.c", off));
            Files.writeString(out, "// addr 0x" + h + "  " + f.getName() + "\n" + body);
            ok++;
            if (i % 20 == 0) println("decompiled " + ok + "/" + lines.size());
        }
        println("done: ok=" + ok + " fail=" + fail);
    }
}
