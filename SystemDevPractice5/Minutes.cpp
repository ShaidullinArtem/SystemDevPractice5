#include "Minutes.h"


int minutesFromStartOfDay(const Time& time) {
    return time.hours * 60 + time.minutes;
}

int minutesFromStartOfDay(int hours, int minutes, int seconds) {
    return hours * 60 + minutes;
}

int minutesFromStartOfDay(int hours, int minutes) {
    return hours * 60 + minutes;
}

