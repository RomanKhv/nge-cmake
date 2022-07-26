cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (efd_explorer "efd_explorer.cpp" "efd_explorer.h")

target_include_directories( efd_explorer
	PUBLIC
	"${PROJECT_SOURCE_DIR}/source.basic/utils/include"
)

# TODO: Add tests and install targets if needed.
target_link_libraries( efd_explorer
	PUBLIC
)
