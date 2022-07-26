cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME efd_explorer)

project ( ${PROJECT_NAME} )

# Add source to this project's executable.
add_executable ( ${PROJECT_NAME} "efd_explorer.cpp" )

target_include_directories( ${PROJECT_NAME}
	PUBLIC
	"${PROJECT_SOURCE_DIR}/source.basic/utils/include"
)

target_link_libraries( ${PROJECT_NAME}
	PUBLIC
)
