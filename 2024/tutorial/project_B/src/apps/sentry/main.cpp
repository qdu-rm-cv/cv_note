#include "camera.hpp"
#include "imu.hpp"
#include "lidar.hpp"
#include "locate.hpp"
#include "detector.hpp"
#include "predictor.hpp"
#include "spdlog/spdlog.h"

int main(int argc, char **argv)
{
    SPDLOG_WARN("SENTRY");
    lidar lidar;
    lidar.receive(0);
    camera cam;
    cam.set(0,640,480);
    detector detector;
    detector.VisualizeResult();
    detector.~detector();
    cam.~camera();
    lidar.~lidar();
    return 0;
}
