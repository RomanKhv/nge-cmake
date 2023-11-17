###   idl/tests (EXCLUDE_FROM_ALL)   ###
project( com_tests )

add_executable(${PROJECT_NAME}
    EXCLUDE_FROM_ALL    # due to regsvr32 
    Main.cpp
)
target_link_libraries(${PROJECT_NAME} comapi)

set_target_properties(${PROJECT_NAME} PROPERTIES
    FOLDER source.x/idl
)

add_custom_command(
    TARGET ${PROJECT_NAME}
    PRE_BUILD
    COMMAND regsvr32 ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Debug/GreeterLib.dll
    VERBATIM
)
