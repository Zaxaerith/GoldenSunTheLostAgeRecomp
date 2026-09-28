cmake_minimum_required(VERSION 3.20)
project(GoldenSunTheLostAgeRecomp LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GBARECOMP_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/reference/gbarecomp")
set(TOMLPLUSPLUS_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/reference/tomlplusplus")
set(SDL2_DEV_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/reference/sdl2/SDL2-2.32.10/x86_64-w64-mingw32")
set(GBARECOMP_TOMLPP_INCLUDE_DIR
    "${TOMLPLUSPLUS_SOURCE_DIR}/include/toml++" CACHE PATH "toml++ headers" FORCE)
set(SDL2_INCLUDE_DIR "${SDL2_DEV_ROOT}/include/SDL2" CACHE PATH "SDL2 headers" FORCE)
set(SDL2_LIBRARY "${SDL2_DEV_ROOT}/lib/libSDL2.dll.a" CACHE FILEPATH "SDL2 import library" FORCE)

if(NOT EXISTS "${GBARECOMP_SOURCE_DIR}/CMakeLists.txt" OR
   NOT EXISTS "${TOMLPLUSPLUS_SOURCE_DIR}/include/toml++/toml.h" OR
   NOT EXISTS "${SDL2_LIBRARY}")
    message(FATAL_ERROR "Dependencies are missing. Run scripts/build.ps1 first.")
endif()
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/recompiled.h" OR
   NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/generated_bios/bios_recompiled.h")
    message(FATAL_ERROR "Local ROM/BIOS output is missing. Run scripts/build.ps1 first.")
endif()

add_subdirectory("${GBARECOMP_SOURCE_DIR}" framework)

get_target_property(_arm_sources gbarecomp_armv4t SOURCES)
list(REMOVE_ITEM _arm_sources "src/armv4t/interpreter.cpp")
set_property(TARGET gbarecomp_armv4t PROPERTY SOURCES "${_arm_sources}")
target_sources(gbarecomp_armv4t PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/patches/interpreter.cpp")

get_target_property(_gba_sources gbarecomp_gba SOURCES)
list(REMOVE_ITEM _gba_sources "src/gba/gba_save.cpp")
set_property(TARGET gbarecomp_gba PROPERTY SOURCES "${_gba_sources}")
target_sources(gbarecomp_gba PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/patches/gba_save.cpp")

get_target_property(_runtime_sources gbarecomp_runtime SOURCES)
list(REMOVE_ITEM _runtime_sources
    "src/runtime/runtime.cpp"
    "src/runtime/generated_bios/bios_dispatch_stub.cpp"
    "src/runtime/runtime_arm_default_aborts.cpp")
set_property(TARGET gbarecomp_runtime PROPERTY SOURCES "${_runtime_sources}")
target_sources(gbarecomp_runtime PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src/patches/runtime.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated_bios/bios_recompiled.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated_bios/bios_dispatch_table.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/patches/runtime_arm_default_aborts.cpp")
target_include_directories(gbarecomp_runtime PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated_bios"
    "${GBARECOMP_SOURCE_DIR}/src/armv4t")
target_compile_definitions(gbarecomp_runtime PUBLIC GBARECOMP_HAVE_BIOS_RECOMP=1)

file(GLOB GBARECOMP_SHARDS CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/recompiled_*.cpp")
if(NOT GBARECOMP_SHARDS)
    message(FATAL_ERROR "No locally generated cart shards found.")
endif()
set(GBARECOMP_GAME_SOURCES ${GBARECOMP_SHARDS}
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/dispatch_table.cpp")
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/symbol_map.cpp")
    list(APPEND GBARECOMP_GAME_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/symbol_map.cpp")
endif()
add_library(gbarecomp_game STATIC ${GBARECOMP_GAME_SOURCES})
target_include_directories(gbarecomp_game PRIVATE
    "${GBARECOMP_SOURCE_DIR}/src/armv4t"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated")

add_executable(gs2 WIN32 src/runtime/main.cpp)
if(MINGW)
    target_link_options(gs2 PRIVATE -mwindows)
endif()
add_custom_command(TARGET gs2 POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${SDL2_DEV_ROOT}/bin/SDL2.dll" "$<TARGET_FILE_DIR:gs2>/SDL2.dll")
target_include_directories(gs2 PRIVATE "${GBARECOMP_SOURCE_DIR}/src/runtime")
if(MINGW)
    target_link_libraries(gs2 PRIVATE
        -Wl,--start-group
        gbarecomp_game gbarecomp_runtime gbarecomp_gba gbarecomp_armv4t
        gbarecomp_debug gbarecomp_recompile_core gbarecomp_heal_gate
        -Wl,--end-group)
else()
    target_link_libraries(gs2 PRIVATE
        gbarecomp_game gbarecomp_runtime gbarecomp_gba gbarecomp_armv4t
        gbarecomp_debug gbarecomp_recompile_core gbarecomp_heal_gate)
endif()
