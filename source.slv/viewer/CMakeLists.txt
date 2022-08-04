###   viewer   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME viewer)
project ( ${PROJECT_NAME} CXX )

include_directories(src/include)    # private headers

add_subdirectory(src/lib)
#add_subdirectory(src/dll)
#add_subdirectory(tests)

file(GLOB PUBLIC_HEADERS "include/vwr/*.h")
file(GLOB DLL_SRC "src/dll/*.h" "src/dll/*.cpp")
add_library( ${PROJECT_NAME} SHARED 
	${PUBLIC_HEADERS}
	${DLL_SRC}
)

# public interface for viewer DLL
target_include_directories( ${PROJECT_NAME} PUBLIC "include" )

target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		viewer_lib
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.slv/viewer
)
