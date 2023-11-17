###   viewer/tests   ###
project(viewer_tests CXX)

add_executable(${PROJECT_NAME}
    vis_tests.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Boost::unit_test_framework
        viewer_lib
)

set_target_properties(${PROJECT_NAME}
    PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_TESTS_OUTPUT_DIR}
    FOLDER source.slv/viewer
)

add_test(NAME VIS_TESTS COMMAND $<TARGET_FILE:${PROJECT_NAME}>)
