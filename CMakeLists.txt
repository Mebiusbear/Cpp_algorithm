
cmake_minimum_required(VERSION 2.8)
 
project(cmakeTest)

aux_source_directory(. DIR_SRCS)
 
include_directories(./include)
 
add_subdirectory(src)
 
add_executable(main ${DIR_SRCS})
 
target_link_libraries(main source_lib)