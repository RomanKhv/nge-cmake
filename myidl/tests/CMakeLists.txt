cmake_minimum_required(VERSION 3.20)

set(BINARIES_PATH ${PROJECT_BINARY_DIR}/build_results)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BINARIES_PATH}/bin) 
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BINARIES_PATH}/lib) 
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BINARIES_PATH}/lib) 
set(CMAKE_PDB_OUTPUT_DIRECTORY ${BINARIES_PATH}/pdb)

set(PROJECT_NAME tests)
project(${PROJECT_NAME})

add_executable(MainCpp Main.cpp)
target_link_libraries(MainCpp myidl)
