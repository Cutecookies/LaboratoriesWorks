cmake_minimum_required(VERSION 3.26)
project(project1 C)

set(CMAKE_C_STANDARD 11)

add_executable(project1 main.c)

add_subdirectory(libs)
target_link_libraries(project1 data_structures)
target_link_libraries(project1 algorithms)