cmake_minimum_required(VERSION 3.22)
project(resource_dll)

add_library(
    res_dll 
    MODULE
    "resource.rc"
)

target_include_directories(res_dll PUBLIC ${PROJECT_SOURCE_DIR})

set_property(
    TARGET 
    res_dll 
    PROPERTY 
    LINK_OPTIONS 
    "/NOENTRY" "/IMPLIB:NONE" "/PDB:" "/DEBUG:NONE" "/ILK:NONE"
)

set_property(
    TARGET
    res_dll
    PROPERTY
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}"
)