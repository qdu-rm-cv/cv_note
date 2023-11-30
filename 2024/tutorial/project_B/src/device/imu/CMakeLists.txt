cmake_minimum_required(VERSION 3.12)
project(Dimu)

add_library(${PROJECT_NAME}
    STATIC
    imu.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME}
    spdlog::spdlog
)