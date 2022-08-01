###   idl/tests (EXCLUDE_FROM_ALL)   ###
cmake_minimum_required(VERSION 3.20)

set(PROJECT_NAME com_tests)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME}
    EXCLUDE_FROM_ALL    # due to regsvr32 
    Main.cpp
)
target_link_libraries(${PROJECT_NAME} comapi)

add_custom_command(
    TARGET ${PROJECT_NAME}
    PRE_BUILD
    COMMAND regsvr32 ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Debug/GreeterLib.dll
    VERBATIM
)
