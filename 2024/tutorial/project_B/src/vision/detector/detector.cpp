#include "detector.hpp"

#include "spdlog/spdlog.h"

detector::detector()
{
    SPDLOG_CRITICAL("detector started");
}

void detector::VisualizeResult()
{
    SPDLOG_CRITICAL("the result is{}",this->value);
}

detector::~detector()
{
    SPDLOG_CRITICAL("detector stopped");
}