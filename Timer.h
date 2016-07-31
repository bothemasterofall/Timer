#pragma once

#include <vector>
#include <ctime>

class Timer
{
    public:
        Timer();

        unsigned int getClocks();
        unsigned int getClocks(int first, int second);

        double getSeconds();
        double getSeconds(int first, int second);

        void setPoint();

    private:
        std::vector<clock_t> intervals;
};
