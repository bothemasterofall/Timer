#pragma once

#include <ctime>

class Timer
{
    public:
        Timer();

        double getClocks();
        double getClocks(int first, int second);

        double getSeconds();
        double getSeconds(int first, int second);

        void setPoint();

    private:
        std::vector<clock_t> intervals;
};
