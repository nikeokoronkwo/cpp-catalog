cmake_minimum_required(VERSION 3.10)
project(ansi VERSION 1.0)

add_library(ansi base.cc custom.cc format.cc other_styles.cc format.c)

target_include_directories(ansi PRIVATE ${PROJECT_SOURCE_DIR})

add_executable(aex++ main.cc)

add_executable(aex main.c)

target_link_libraries(aex ansi)
target_link_libraries(aex++ ansi)

target_include_directories(aex++ PUBLIC ${PROJECT_SOURCE_DIR})
target_include_directories(aex PUBLIC ${PROJECT_SOURCE_DIR})