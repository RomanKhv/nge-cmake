###   pm_gui_win   ###
cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME pm_gui_win)

project ( ${PROJECT_NAME} CXX )

# Add source to this project's executable.
add_library( ${PROJECT_NAME} SHARED
    "pm_gui_win.cpp"
    "pch.cpp"
    "PMPage.cpp"
)

target_include_directories( ${PROJECT_NAME}
    PUBLIC
        "../../include"
)

target_compile_definitions( ${PROJECT_NAME}
    PRIVATE
        PMGUIWIN_EXPORTS
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.ui/pm_gui
)