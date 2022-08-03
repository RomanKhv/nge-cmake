cmake_minimum_required(VERSION 3.22)
project(resource_loader)

add_executable(res_loader res_dll_loader.cpp)

target_include_directories(res_loader PRIVATE ../source.res_dll)
add_dependencies(res_loader res_dll)
