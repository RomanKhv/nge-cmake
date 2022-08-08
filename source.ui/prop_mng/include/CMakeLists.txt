set (PROJECT_NAME pm_gui_interface)

add_library(${PROJECT_NAME} 
		INTERFACE)
target_include_directories(${PROJECT_NAME} 
		INTERFACE .)