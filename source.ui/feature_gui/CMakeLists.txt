project(feature_gui CXX)

add_library(${PROJECT_NAME} 
	SHARED 
		${PROJECT_NAME}.cpp)
target_include_directories(${PROJECT_NAME} 
	PUBLIC 
		include)

target_link_libraries(${PROJECT_NAME} 
	PUBLIC 
		pm_gui_interface)
target_compile_definitions(${PROJECT_NAME} 
	PRIVATE 
		FEATURE_GUI_EXPORT)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.ui/feature_gui
)