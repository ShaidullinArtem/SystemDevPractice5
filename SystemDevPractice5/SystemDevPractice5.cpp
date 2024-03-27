#include <iostream>
#include "Minutes.h"

int main()
{
    setlocale(LC_ALL, "RU");

    Time time = { 10, 30, 45 };
    std::cout << "Время, пройденное с начала дня: " << minutesFromStartOfDay(time) << std::endl;
    std::cout << "Время, пройденное с начала дня: " << minutesFromStartOfDay(10, 30, 45) << std::endl;
    std::cout << "Время, пройденное с начала дня: " << minutesFromStartOfDay(10, 30) << std::endl;
    return 0;
}
