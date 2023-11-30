#include "lidar.hpp"
#include "spdlog/spdlog.h"

lidar::lidar()
{
    SPDLOG_CRITICAL("find lidar");
}

void lidar::receive(int index)
{
    SPDLOG_CRITICAL("the data is {}",this->data);
}

lidar::~lidar()
{
    SPDLOG_CRITICAL("lidar destructed!");
}