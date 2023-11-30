
#include "log.hpp"  //头文件
#include "area.hpp"  //静态库
#include "perimeter.hpp"  //动态库
#include "spdlog/spdlog.h" //第三方库

#include <iostream>

int main()
{
    int square_a=4.0;
    SPDLOG_INFO("start!");
    log();
    std::cout<<"周长:"<<perimeter(square_a)<<std::endl;
    std::cout<<"面积:"<<area(square_a)<<std::endl;
    return 0;
}