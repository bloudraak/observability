cmake_minimum_required (VERSION 3.4)
project (observability)

set (OBSERVABILITY_VERSION_MAJOR 1)
set (OBSERVABILITY_VERSION_MINOR 0)
set (OBSERVABILITY_VERSION_BUILD 0)
set (OBSERVABILITY_VERSION_REVISION 0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

configure_file (
    "${PROJECT_SOURCE_DIR}/version.h.in"
    "${PROJECT_BINARY_DIR}/version.h"
)
include_directories("${PROJECT_BINARY_DIR}") 
add_executable(observerd main.c)
