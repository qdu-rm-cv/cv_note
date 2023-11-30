cmake_minimum_required(VERSION 3.12)
project(exe_sentry)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    Dcamera
    Dimu
    Dlidar
    locate
    detector
    predictor
    spdlog::spdlog
)

add_dependencies(${PROJECT_NAME}
    Dcamera
    Dimu
    Dlidar
    locate
    detector
    predictor
)