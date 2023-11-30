#pragma once
class lidar
{
    private:
        int index;
        double data=0;
    public:
        lidar();
        void receive(int index);
        ~lidar();
};