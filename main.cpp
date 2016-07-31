#include "Timer.h"
#include <cstdio>

int main()
{
    Timer timer;
    timer.setPoint();

    for (int i = 0; i < 10000; i++)
    {
        // Do stuff
    }

    timer.setPoint();

    for (int i = 0; i < 20000; i++)
    {
        // Do other stuff
    }

    timer.setPoint();

    printf("Total time in clocks: %u\n", timer.getClocks());
    printf("Total time in seconds: %lf\n", timer.getSeconds());

    printf("Time between first two points in clocks: %u\n",
        timer.getClocks(0, 1));
    printf("Time between first two points in seconds: %lf\n",
        timer.getSeconds(0, 1));

    return 0;
}
