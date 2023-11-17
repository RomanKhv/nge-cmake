###   static lib   ###

project( utils CXX )

# Add source to this project's executable.
add_library( ${PROJECT_NAME} STATIC "src/utils.cpp" )
target_include_directories( ${PROJECT_NAME} PUBLIC "include" )

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.basic
)