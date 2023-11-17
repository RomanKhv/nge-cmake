function( target_public_api_ target )

    cmake_parse_arguments( ARGS "" "SUBDIR;GROUP" "" ${ARGN} )

    set( api_headers )
    set( ide_group_name )

    if ( ARGS_SUBDIR )
        file( GLOB_RECURSE api_headers "${ARGS_SUBDIR}/*.h" )
        target_sources( ${PROJECT_NAME}
            PUBLIC FILE_SET HEADERS BASE_DIRS "${ARGS_SUBDIR}" FILES ${api_headers} ${ARGS_UNPARSED_ARGUMENTS}
        )
        set( ide_group_name ${ARGS_SUBDIR} )
    else()
        set( ide_group_name "public interface" )
    endif()

    if ( ARGS_GROUP )
        set( ide_group_name ${ARGS_GROUP} )
    endif()

    target_sources( ${PROJECT_NAME}
        PUBLIC FILE_SET HEADERS FILES ${ARGS_UNPARSED_ARGUMENTS}
    )

    source_group( "${ide_group_name}" FILES ${api_headers} ${ARGS_UNPARSED_ARGUMENTS} )

    message( "${target} api: " ${api_headers} ${ARGS_UNPARSED_ARGUMENTS} )

endfunction()
