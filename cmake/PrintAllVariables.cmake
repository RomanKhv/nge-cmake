cmake_minimum_required(VERSION 3.20)


macro(print_all_variables)
    message(STATUS "print_all_variables------------------------------------------{")
    get_cmake_property(_variableNames VARIABLES)
    foreach (_variableName ${_variableNames})
        message(STATUS "${_variableName}=${${_variableName}}")
    endforeach()
    message(STATUS "print_all_variables------------------------------------------}")
endmacro()


function(print_all_variables_to_file)
    get_cmake_property(_variableNames VARIABLES)
    foreach (_variableName ${_variableNames})
        # message(STATUS "${_variableName}=${${_variableName}}")
        list(APPEND vars_list "${_variableName}=${${_variableName}}\n")
    endforeach()
    file(WRITE cmake_all_vars_snapshot.txt ${vars_list})
endfunction()
