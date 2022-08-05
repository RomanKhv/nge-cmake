set(THIRD_PARTY_DIRECTORY ${CMAKE_SOURCE_DIR}/third_party)

################################

set(BOOST_VERSION "1.79.0")
set(BOOST_ROOT ${THIRD_PARTY_DIRECTORY}/boost/${BOOST_VERSION})
set(BOOST_INCLUDEDIR ${BOOST_ROOT}/include)
set(BOOST_LIBRARYDIR ${BOOST_ROOT}/lib)

target_compile_definitions(${TARGET_NAME} PUBLIC "-DBOOST_ALL_NO_LIB")
set(Boost_NO_SYSTEM_PATHS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_DEBUG_LIBS ON)
set(Boost_USE_RELEASE_LIBS ON)
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost ${BOOST_VERSION} COMPONENTS context chrono date_time filesystem system unit_test_framework thread regex serialization wserialization iostreams program_options REQUIRED)

add_library(boost INTERFACE IMPORTED)
target_include_directories(boost INTERFACE ${BOOST_INCLUDEDIR})
target_link_libraries(boost INTERFACE ${Boost_LIBRARIES})

################################