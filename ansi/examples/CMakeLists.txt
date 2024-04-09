add_executable(aex++ main.cc)

target_link_libraries(aex++ ansi)

target_include_directories(aex++ PRIVATE "${PROJECT_SOURCE_DIR}/include")
target_include_directories(aex++ PRIVATE "${PROJECT_SOURCE_DIR}/lib")