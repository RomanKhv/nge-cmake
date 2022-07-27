###   viewer   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME viewer)
project ( ${PROJECT_NAME} CXX )

include_directories(src/include)    # private headers

add_subdirectory(src/lib)
#add_subdirectory(src/dll)
#add_subdirectory(tests)

add_library( ${PROJECT_NAME} SHARED "src/dll/vwr_module.cpp" )

# public interface for viewer DLL
target_include_directories( ${PROJECT_NAME} PUBLIC "include" )

target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		viewer_lib
)

