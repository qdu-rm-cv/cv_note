cmake_minimum_required(VERSION 3.12)
project(Dlidar)

add_library(${PROJECT_NAME}
    STATIC
    lidar.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME}
    spdlog::spdlog
)