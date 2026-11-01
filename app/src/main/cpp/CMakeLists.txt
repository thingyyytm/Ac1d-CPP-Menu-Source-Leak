cmake_minimum_required(VERSION 3.22.1)
project("acid")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(
    -w
    -fexceptions
    -fno-rtti
    -fvisibility=hidden
    -fvisibility-inlines-hidden
    -ffunction-sections
    -fdata-sections
    -fno-unwind-tables
    -fno-asynchronous-unwind-tables
    -Wno-inaccessible-base
)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_options(-O3 -flto)
    add_link_options(-Wl,--gc-sections -Wl,--strip-all -flto)
endif()

# --- BNM (ByNameModding) ---
# https://github.com/dastanmg/ByNameModding   (any current fork works)
set(BNM_PATH ${CMAKE_CURRENT_SOURCE_DIR}/extern/BNM)
add_subdirectory(${BNM_PATH})

# --- Dobby ---
# https://github.com/jmpews/Dobby
set(DOBBY_PATH ${CMAKE_CURRENT_SOURCE_DIR}/extern/Dobby)
set(DOBBY_GENERATE_SHARED OFF CACHE BOOL "" FORCE)
set(DOBBY_DEBUG OFF CACHE BOOL "" FORCE)
add_subdirectory(${DOBBY_PATH})

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/Include/Menu
    ${CMAKE_CURRENT_SOURCE_DIR}/Include/Hooks
    ${CMAKE_CURRENT_SOURCE_DIR}/Include/Features
    ${BNM_PATH}/include
    ${DOBBY_PATH}/include
)

file(GLOB_RECURSE MOD_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Include/*.cpp
)

add_library(acid SHARED ${MOD_SOURCES})

target_link_libraries(acid
    BNM
    dobby
    log
    android
    EGL
    GLESv3
    m
)

set_target_properties(acid PROPERTIES OUTPUT_NAME "acid")
