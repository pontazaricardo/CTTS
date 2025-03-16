cmake_minimum_required(VERSION  3.28)

project(constant-time-test-suite VERSION 0.1 LANGUAGES C ASM)
enable_testing()
set(CMAKE_C_STANDARD 11)

set(DEBUG_FLAGS -O0)
set(RELEASE_FLAGS -Wextra -Wpedantic)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
include(dependencies_fetch)

add_subdirectory(src)
add_subdirectory(submodules)

