#include "camera.hpp"
#include "spdlog/spdlog.h"

camera::camera()
{
    SPDLOG_INFO("camera ready!");
}

camera::~camera()
{
    SPDLOG_INFO("camera close!");
}

void camera::set(int index,int width,int height)
{
    this->index = index;
    SPDLOG_CRITICAL("index is {}",this->index);
    this->width = width;
    SPDLOG_CRITICAL("width is {}",this->width);
    this->height = height;
    SPDLOG_CRITICAL("height is {}",this->height);
}