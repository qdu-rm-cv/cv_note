#pragma once
class camera
{
    private:
        int index;
        int width, height;
    public:
        camera();
        void set(int index, int width, int height);
        ~camera();
};