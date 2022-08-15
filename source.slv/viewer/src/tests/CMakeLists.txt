cmake_minimum_required(VERSION 3.20)

set(PROJECT_NAME vis_tests)
project(${PROJECT_NAME} CXX)

add_executable(${PROJECT_NAME} ${PROJECT_NAME}.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE viewer_lib)
target_link_libraries(${PROJECT_NAME} PRIVATE Boost::unit_test_framework)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_TESTS_OUTPUT_DIR} )
set_target_properties( ${PROJECT_NAME} PROPERTIES
    FOLDER source.slv/tests
)

add_test(NAME VIS_TESTS
    COMMAND $<TARGET_FILE:${PROJECT_NAME}>)