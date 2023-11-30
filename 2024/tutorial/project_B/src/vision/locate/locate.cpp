#include "locate.hpp"

#include "spdlog/spdlog.h"

locate::locate()
{
    SPDLOG_CRITICAL("detector started");
}

void locate::VisualizeLocation()
{
    SPDLOG_CRITICAL("the location is{}",this->location);
}

locate::~locate()
{
    SPDLOG_CRITICAL("detector stopped");
}