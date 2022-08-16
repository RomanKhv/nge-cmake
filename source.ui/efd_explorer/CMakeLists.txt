###   efd_explorer   ###
cmake_minimum_required (VERSION 3.20)
set (PROJECT_NAME efd_explorer)
set (USE_MFC OFF)

project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_executable ( ${PROJECT_NAME} 
	"efd_explorer.cpp"
)

target_link_libraries( ${PROJECT_NAME}
	PRIVATE
		utils
		feature_gui
		gui_res_headers
)

if (USE_MFC)
	target_link_libraries( ${PROJECT_NAME}
		PRIVATE
			pm_gui_mfc
		)
	set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/DELAYLOAD:pm_gui_mfc.dll")
else()
	target_link_libraries( ${PROJECT_NAME}
		PRIVATE
			pm_gui_win
	)
	set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/DELAYLOAD:pm_gui_win.dll")
endif()
