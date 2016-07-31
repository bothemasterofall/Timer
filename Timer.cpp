#include "Timer.h"

using std::vector;

Timer::Timer()
{
}

double Timer::getClocks()
{
    return getClocks(0, intervals.size() - 1);
}

double Timer::getClocks(int first, int second)
{
    if (first <= second && first >= 0 && second < intervals.size())
    {
        return intervals[second] - intervals[first];
    }
}

double Timer::getSeconds()
{
    double clocks = getClocks();
    if (clocks != -1)
    {
        clocks /= CLOCKS_PER_SEC;
    }

    return clocks;
}

double Timer::getSeconds(int first, int second)
{
    double clocks = getClocks(first, second);
    if (clocks != -1)
    {
        clocks /= CLOCKS_PER_SEC;
    }

    return clocks;
}

void Timer::setPoint()
{
    intervals.push_back(clock());
}
