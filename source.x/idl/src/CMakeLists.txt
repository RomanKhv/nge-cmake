###   idl/src   ###

project( comapi )

set(IDLFILE Greeter.idl)

#set midl output dirs
get_filename_component(IDL_FILE_NAME_WE ${IDLFILE} NAME_WE)
set(MIDL_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../src/idl_i)
set(MIDL_OUTPUT ${MIDL_OUTPUT_PATH}/${IDL_FILE_NAME_WE}_i.h)

#set architecture
if(_PLATFORM_X64)
    set(MIDL_ARCH x64)
else()
    set(MIDL_ARCH win32)
endif()

#call midl.exe
add_custom_command(
    OUTPUT ${MIDL_OUTPUT}
    COMMAND midl.exe ARGS /${MIDL_ARCH} /env ${MIDL_ARCH} /nologo ${CMAKE_CURRENT_LIST_DIR}/${IDLFILE} /out ${MIDL_OUTPUT_PATH} ${MIDL_FLAGS} /h ${MIDL_OUTPUT}
    DEPENDS ${CMAKE_CURRENT_LIST_DIR}/${IDLFILE}
    VERBATIM
)

set(FINDIDL_TARGET ${PROJECT_NAME}_gen)
add_custom_target(${FINDIDL_TARGET} DEPENDS ${MIDL_OUTPUT} SOURCES ${IDLFILE})

set_target_properties(${FINDIDL_TARGET} PROPERTIES
    FOLDER source.x/idl
)

######################################################################

add_library(${PROJECT_NAME} INTERFACE)
add_dependencies(${PROJECT_NAME} ${FINDIDL_TARGET})
target_include_directories(${PROJECT_NAME} INTERFACE ${MIDL_OUTPUT_PATH})

set_target_properties(${PROJECT_NAME} PROPERTIES
    FOLDER source.x/idl
)

######################################################################

file(GLOB src "*.h" "*.cpp" "*.def" "*.rc" "*.rgs") # default for sources without specified group: "Header Files"+"Source Files"
source_group(res FILES "resource.h" "Greeter.rc")   # custom folder for specific files
source_group("" FILES "dllmain.cpp" "Greeter.cpp")  # no folder

add_library(GreeterLib SHARED ${src})
target_link_libraries(GreeterLib ${PROJECT_NAME})

set_target_properties(GreeterLib PROPERTIES
    FOLDER source.x/idl
)


if(MSVC)
    set_target_properties(GreeterLib PROPERTIES COMPILE_FLAGS "/Yustdafx.h")
    set_source_files_properties(stdafx.cpp PROPERTIES COMPILE_FLAGS "/Ycstdafx.h")
endif()