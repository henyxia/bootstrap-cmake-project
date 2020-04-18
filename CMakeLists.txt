cmake_minimum_required(VERSION 3.10)

project(yxia)

set(CMAKE_SOURCE_DIR ${CMAKE_HOME_DIRECTORY}/src)

ADD_CUSTOM_COMMAND(
    OUTPUT ${CMAKE_SOURCE_DIR}/version.c
           ${CMAKE_SOURCE_DIR}/_version.c
    COMMAND ${CMAKE_COMMAND} -P
	${CMAKE_HOME_DIRECTORY}/cmake/version.cmake
)

add_executable(demo src/main.c src/version.c)
