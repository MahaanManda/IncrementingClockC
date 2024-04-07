#include "extClockType.h"
#include <iostream>

using namespace std;

extClockType::extClockType(int hours, int minutes, int seconds, int timezone)
    : clockType(hours, minutes, seconds), timeZone(timezone) {
}

void extClockType::setTimeZone(int timezone) {
    this->timeZone = timezone; // Use 'this' pointer to refer to the member variable
}

int extClockType::getTimeZone() const {
    return timeZone;
}
