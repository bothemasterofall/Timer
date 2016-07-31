#pragma once

#include <vector>
#include <ctime>

class Timer
{
    public:
        Timer();

        unsigned int getClocks();
        unsigned int getClocks(unsigned int first, unsigned int second);

        double getSeconds();
        double getSeconds(unsigned int first, unsigned int second);

        void setPoint();

    private:
        std::vector<clock_t> intervals;
};
