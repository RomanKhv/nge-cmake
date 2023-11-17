###   efd_solver   ###
project( efd_solver CXX )

# Add source to this project's executable.
add_executable ( ${PROJECT_NAME} "efd_solver.cpp" )

target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		utils
		viewer
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.slv
)