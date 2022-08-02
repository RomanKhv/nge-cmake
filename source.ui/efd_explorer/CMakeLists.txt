###   efd_explorer   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME efd_explorer)
project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_executable ( ${PROJECT_NAME} "efd_explorer.cpp" )
target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		utils
)

if(MSVC)
	include(FindMFC)
if(MFC_FOUND)
	target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		pm_gui_mfc
	)
else()
	target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		pm_gui_win
	)
endif()
else()
	message(FATAL_ERROR "no other platforms realization")
endif()