###   viewer/lib   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME viewer_lib)
project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_library( ${PROJECT_NAME} STATIC "vis_params.cpp" )
