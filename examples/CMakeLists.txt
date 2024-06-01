cmake_minimum_required (VERSION 3.8)

project(examples)

set(SourceFiles
 EX.c)

include_directories(${PROJECT_NAME})
add_library(${PROJECT_NAME} ${ProjectType} ${SourceFiles})