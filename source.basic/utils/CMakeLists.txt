cmake_minimum_required (VERSION 3.8)

set (TRG_NAME utils)

# Add source to this project's executable.
add_library( ${TRG_NAME} STATIC "src/utils.cpp" )
target_include_directories( ${TRG_NAME} PUBLIC "include" )

# TODO: Add tests and install targets if needed.
