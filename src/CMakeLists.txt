cmake_minimum_required (VERSION 3.4)
project (observability)
enable_testing()

set (OBSERVABILITY_VERSION_MAJOR 1)
set (OBSERVABILITY_VERSION_MINOR 0)
set (OBSERVABILITY_VERSION_BUILD 0)
set (OBSERVABILITY_VERSION_REVISION 0)

configure_file (
    "${PROJECT_SOURCE_DIR}/version.h.in"
    "${PROJECT_BINARY_DIR}/version.h"
)
include_directories ("${PROJECT_SOURCE_DIR}/probe" "${PROJECT_BINARY_DIR}")

add_subdirectory (probe)
add_executable(observerd main.c)
target_link_libraries (observerd probe)

install (TARGETS observerd DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/version.h" DESTINATION include)

add_test (observerd_runs observerd) 
