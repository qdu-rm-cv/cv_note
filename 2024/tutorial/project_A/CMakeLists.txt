cmake_minimum_required(VERSION 3.12)

project(square)

# ###############静态库配置######################
add_library(libp STATIC
    src/perimeter.cpp
)

target_include_directories(libp
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include/static
)

# ################动态库配置#####################
add_library(liba SHARED
    src/area.cpp
)

target_include_directories(liba
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include/share
)

# ##############添加可执行程序####################
add_executable(${PROJECT_NAME}_node
    src/main.cpp
    src/log.cpp
)

# ################寻找第三方库####################
find_package(spdlog REQUIRED)

# ##############添加头文件路径####################
target_include_directories(${PROJECT_NAME}_node
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

# ###############链接库#####################
target_link_libraries(${PROJECT_NAME}_node
    PRIVATE
    liba
    libp
    spdlog::spdlog
)

# ########################################
# BUG
# ########################################
#
# 头文件路径 #include"share/area.hpp"
# target_include_directories(liba PUBLIC
# ${PROJECT_SOURCE_DIR}/include
#
# ########################################