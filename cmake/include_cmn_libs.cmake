set(THIRD_PARTY_DIRECTORY ${CMAKE_SOURCE_DIR}/third_party)

################################

set(BOOST_VERSION "1.79.0")
set(BOOST_ROOT ${THIRD_PARTY_DIRECTORY}/boost/${BOOST_VERSION})
# https://cmake.org/cmake/help/latest/module/FindBoost.html
set(BOOST_INCLUDEDIR ${BOOST_ROOT})
set(BOOST_LIBRARYDIR ${BOOST_ROOT}/lib64-msvc-14.2)

set(BOOST_WHATEVER_NO_LIB ON)
set(Boost_NO_SYSTEM_PATHS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_DEBUG_LIBS OFF)
set(Boost_USE_RELEASE_LIBS ON)
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost ${BOOST_VERSION} COMPONENTS context chrono date_time filesystem system unit_test_framework thread regex serialization wserialization iostreams program_options 
    # REQUIRED      # due to boost setup is optional in this repo
)

# add_library(boost INTERFACE)
# target_include_directories(boost INTERFACE ${BOOST_INCLUDEDIR})
# target_link_libraries(boost INTERFACE ${Boost_LIBRARIES})

################################