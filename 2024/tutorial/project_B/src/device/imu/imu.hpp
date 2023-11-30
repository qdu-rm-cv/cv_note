#pragma once
class imu
{
    private:
        int index;
        double data;
    public:
        imu();
        void init(int index);
        ~imu();
};