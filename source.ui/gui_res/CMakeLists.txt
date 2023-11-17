###   gui_res   ###
project ( gui_res_headers CXX )

add_library( ${PROJECT_NAME} INTERFACE
    "include/gui_resources.h"
)

target_include_directories( ${PROJECT_NAME}
    INTERFACE 
        "include"
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.ui/res
)

######################################################################

set (PROJECT_NAME gui_res)
project ( ${PROJECT_NAME} CXX )

set(SRC 
    "include/gui_resources.h"
    "resource.rc"
)
source_group( "" FILES ${SRC} )     # actually applied to both .vcxproj

add_library( ${PROJECT_NAME} MODULE
    ${SRC}
)
    
target_link_libraries( ${PROJECT_NAME}
    PUBLIC 
        gui_res_headers
)

set_target_properties( ${PROJECT_NAME} PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}"
    LINK_OPTIONS "/NOENTRY" "/IMPLIB:NONE" "/PDB:" "/DEBUG:NONE" "/ILK:NONE"
    FOLDER source.ui/res
)
