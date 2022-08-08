###   pm_gui_mfc   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME pm_gui_mfc)

project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_library( ${PROJECT_NAME} SHARED
    "pm_gui_mfc.cpp"
    "pch.cpp"
    "PMPage.cpp"
)

target_link_libraries( ${PROJECT_NAME}
    PUBLIC
    pm_gui_interface
)

target_compile_definitions( ${PROJECT_NAME}
    PRIVATE
        PMGUI_EXPORTS
        _AFXDLL
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.ui/pm_gui
)