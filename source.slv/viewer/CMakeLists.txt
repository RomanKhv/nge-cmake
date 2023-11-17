###   viewer   ###
project( viewer CXX )

include_directories(src/include)    # private headers

add_subdirectory(src/lib)
#add_subdirectory(src/dll)
add_subdirectory(src/tests)

add_library( ${PROJECT_NAME} SHARED )

#1 API definition approach
target_public_api_( ${PROJECT_NAME} SUBDIR "include" )

#2 API definition approach
#target_public_api_( ${PROJECT_NAME} "include/vwr/vwr_module.h" )
#target_include_directories( ${PROJECT_NAME} PUBLIC "include" )

file(GLOB DLL_SRC "src/dll/*.h" "src/dll/*.cpp")
target_sources( ${PROJECT_NAME}
	PRIVATE 
		${DLL_SRC}
)

target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		viewer_lib
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.slv/viewer
)
