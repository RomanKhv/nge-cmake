cmake_minimum_required (VERSION 3.20)	# VS 16.11

project ("nge")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/x64/bin) 
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/x64/lib) 
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/x64/lib) 
set(CMAKE_PDB_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/x64/pdb)

# Include sub-projects.
add_subdirectory ("source.basic/utils")
add_subdirectory ("source.slv")
add_subdirectory ("source.ui/efd_explorer")
