cmake_minimum_required(VERSION 3.12)

project(header)

add_executable(${PROJECT_NAME} main.cpp src/hello.cpp)

target_include_directories(${PROJECT_NAME}
    PRIVATE
    include/
)