cmake_minimum_required(VERSION 3.12)
project(exe_infantry)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    Dcamera
    Dimu
    detector
    predictor
    spdlog::spdlog
)

add_dependencies(${PROJECT_NAME}
    Dcamera
    Dimu
    detector
    predictor
)