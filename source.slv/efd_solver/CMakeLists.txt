cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME efd_solver)
project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_executable ( ${PROJECT_NAME} "efd_solver.cpp" )

target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		utils
		viewer
)
