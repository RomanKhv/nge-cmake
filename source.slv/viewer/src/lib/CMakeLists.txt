###   viewer/lib   ###
project( viewer_lib CXX )

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
