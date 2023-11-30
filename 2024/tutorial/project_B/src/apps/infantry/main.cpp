#include "camera.hpp"
#include "imu.hpp"
#include "detector.hpp"
#include "predictor.hpp"
#include "spdlog/spdlog.h"
int main(int argc, char **argv)
{
    SPDLOG_WARN("INFANTRY");
    camera cam;
    cam.set(0,640,480);
    detector detector;
    detector.VisualizeResult();
    detector.~detector();
    cam.~camera();
    return 0;
}