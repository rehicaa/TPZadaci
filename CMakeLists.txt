cmake_minimum_required(VERSION 3.10)

project(TPZadaci)
file(GLOB_RECURSE CPP_FILES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")

foreach(SOURCE_FILE ${CPP_FILES})
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXEC_NAME} ${SOURCE_FILE})
endforeach()
