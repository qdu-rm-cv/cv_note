cmake_minimum_required(VERSION 3.12)
project(Dcamera)

add_library(${PROJECT_NAME}
    STATIC
    camera.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(hello main.cpp)

target_link_libraries(${PROJECT_NAME}
    spdlog::spdlog
)