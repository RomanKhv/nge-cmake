###   3rdparty   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME thirdparty)
project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_executable ( ${PROJECT_NAME} 
	EXCLUDE_FROM_ALL 	# try boost locally
	"3rdparty.cpp"
)

target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		Boost::boost

)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.basic
)
