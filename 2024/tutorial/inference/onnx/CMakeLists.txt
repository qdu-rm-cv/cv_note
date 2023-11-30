cmake_minimum_required(VERSION 3.12)
project(mnist)

add_executable(${PROJECT_NAME} mnist.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/)
link_directories(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/)

target_link_libraries(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libonnxruntime.so)