﻿###   static lib   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME utils)
project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_library( ${PROJECT_NAME} STATIC "src/utils.cpp" )
target_include_directories( ${PROJECT_NAME} PUBLIC "include" )

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.basic
)