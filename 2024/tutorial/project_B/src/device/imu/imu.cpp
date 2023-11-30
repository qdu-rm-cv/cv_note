#include "imu.hpp"
#include "spdlog/spdlog.h"

imu::imu()
{
    SPDLOG_CRITICAL("find imu!");
}

void imu::init(int index)
{
    SPDLOG_CRITICAL("imu init!");
}

imu::~imu()
{
    SPDLOG_CRITICAL("imu destroy!");
}