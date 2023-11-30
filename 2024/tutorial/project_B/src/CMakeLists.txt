cmake_minimum_required(VERSION 3.12)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/device)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/vision)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/apps/hero)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/apps/sentry)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/apps/infantry)
