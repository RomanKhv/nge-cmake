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

add_library(
    mfc_res 
    MODULE
    "pm_gui_mfc.rc"
)

set_property(
    TARGET 
    mfc_res 
    PROPERTY 
    LINK_OPTIONS 
    "/NOENTRY" "/IMPLIB:NONE" #"/PDB:" "/DEBUG:NONE"
)

set_property(
    TARGET
    mfc_res
    PROPERTY
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}"
)

#set_target_properties(mfc_res PROPERTIES LINK_OPTIONS "/NOENTRY")

target_include_directories( ${PROJECT_NAME}
    PUBLIC
        "include"
)

target_compile_definitions( ${PROJECT_NAME}
    PRIVATE
        PMGUI_EXPORTS
        _AFXDLL
)

target_include_directories( ${PROJECT_NAME}
	PUBLIC
        ../../include
)
