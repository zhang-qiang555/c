cmake_minimum_required(VERSION 3.20.0)

project(PROJECT_NAME)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(${PROJECT_SOURCE_DIR}/learn/src SRC_LIST)

include_directories(${PROJECT_SOURCE_DIR}/learn/include)

add_executable(hello ${SRC_LIST})
