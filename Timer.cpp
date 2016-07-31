#include "Timer.h"

using std::vector;

Timer::Timer()
{
}

unsigned int Timer::getClocks()
{
    return getClocks(0, intervals.size() - 1);
}

unsigned int Timer::getClocks(unsigned int first, unsigned int second)
{
    if (intervals.size() > 0 
        && first >= 0 && second >= 0
        && first < intervals.size() && second < intervals.size()
        && first <= second)
    {
        return intervals[second] - intervals[first];
    }
    else
    {
        return 0;
    }
}

double Timer::getSeconds()
{
    return getSeconds(0, intervals.size() - 1);
}

double Timer::getSeconds(unsigned int first, unsigned int second)
{
    double clocks = getClocks(first, second);
    clocks /= CLOCKS_PER_SEC;
    return clocks;
}

void Timer::setPoint()
{
    intervals.push_back(clock());
}
