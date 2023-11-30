#include "predictor.hpp"

#include "spdlog/spdlog.h"

predictor::predictor()
{
    SPDLOG_CRITICAL("detector started");
}

void predictor::VisualizeResult()
{
    SPDLOG_CRITICAL("the result is{}",this->next);
}

predictor::~predictor()
{
    SPDLOG_CRITICAL("detector stopped");
}