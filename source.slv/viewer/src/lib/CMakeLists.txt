###   viewer/lib   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME viewer_lib)
project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
file(GLOB PRIVATE_HEADERS "../include/*.h")
file(GLOB MY_SRC "*.h" "*.cpp")
add_library( ${PROJECT_NAME} STATIC
    ${PRIVATE_HEADERS}
    ${MY_SRC}
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.slv/viewer
)
