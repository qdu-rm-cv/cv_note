cmake_minimum_required(VERSION 3.12)
project(exe_hero)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    Dcamera
    Dimu
    detector
    predictor
)

add_dependencies(${PROJECT_NAME}
    Dcamera
    Dimu
    detector
    predictor
)