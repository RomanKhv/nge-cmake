###   pm_gui_win   ###
project ( pm_gui_win CXX )

# Add source to this project's executable.
add_library( ${PROJECT_NAME} SHARED
    "pm_gui_win.cpp"
    "pch.cpp"
    "PMPage.cpp"
)

#[[target_include_directories( ${PROJECT_NAME}
    PRIVATE
        "../../include"
)]]#
target_link_libraries( ${PROJECT_NAME}
    PUBLIC
    pm_gui_interface
)

target_compile_definitions( ${PROJECT_NAME}
    PRIVATE
        PMGUI_EXPORTS
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.ui/pm_gui
)