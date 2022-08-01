###   root   ###
cmake_minimum_required (VERSION 3.20)	# VS 16.11

# prevent in-source build
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR “In-source build detected!”)
endif()

#################################################################

project ("nge" CXX)

if(NOT ${CMAKE_SIZEOF_VOID_P} EQUAL 4)
    set(_PLATFORM_X64 TRUE)
    set(_PLATFORM_DIR x64)
else()
    set(_PLATFORM_DIR x32)
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${_PLATFORM_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${_PLATFORM_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${_PLATFORM_DIR}/lib)
set(CMAKE_PDB_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${_PLATFORM_DIR}/pdb)

# Include sub-projects.
add_subdirectory ("source.basic/utils")
add_subdirectory ("source.slv")
add_subdirectory ("source.ui")
add_subdirectory ("source.x")
