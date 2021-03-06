#pragma once

#include <vector>
#include <ctime>

/*******************************************************************************
* The Timer class is an object to assist with keeping time used by a program.
*
* setPoint sets a new time point.
* 
* The clear method erases all time points.
*
* getClocks returns the number of clock ticks between the first and last points
* Its overloaded version may return the difference between two specified points
*
* getSeconds works similarly, but returns the difference in seconds.
*
* All getter methods return 0 if unsuccessful. This will happen if no points
* are set or if out of range intervals are specified. This will also happen if
* the first specified time point is greater than the second in the overloaded
* getClocks and getSeconds methods.
*******************************************************************************/
class Timer
{
    public:
        Timer();

        unsigned int getClocks() const;
        unsigned int getClocks(unsigned int first, unsigned int second) const;

        double getSeconds() const;
        double getSeconds(unsigned int first, unsigned int second) const;

        void setPoint();
        size_t getNumPoints() const;

        void clear();

    private:
        std::vector<clock_t> intervals;
};
