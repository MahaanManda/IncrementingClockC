#ifndef EXTCLOCKTYPE_H
#define EXTCLOCKTYPE_H

#include "clockType.h"

class extClockType: public clockType {
public:
    //constructor
    extClockType(int, int, int, int);
    void setTimeZone(int timezone);
    int getTimeZone() const;

private:
    int timeZone;
};

#endif