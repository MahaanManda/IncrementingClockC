#include <iostream>
#include "clockType.h"
#include "extClockType.h"

using namespace std;

int main() {
    
    clockType myClock(12, 30, 45);
    cout << "Initial Time: ";
    myClock.printTime();
    cout << endl;

    myClock.incrementSeconds();
    cout << "After incrementing seconds: ";
    myClock.printTime();
    cout << endl;

    myClock.incrementMinutes();
    cout << "After incrementing minutes: ";
    myClock.printTime();
    cout << endl;

    myClock.incrementHours();
    cout << "After incrementing hours: ";
    myClock.printTime();
    cout << endl;

    // Test extClockType
    extClockType myExtClock(10, 15, 30, -5);
    cout << "Extended Clock Time: ";
    myExtClock.printTime();
    cout << " (Timezone: " << myExtClock.getTimeZone() << ")" << endl;

    myExtClock.setTimeZone(+8);
    cout << "After setting timezone: ";
    myExtClock.printTime();
    cout << " (Timezone: " << myExtClock.getTimeZone() << ")" << endl;

    return 0;
}
