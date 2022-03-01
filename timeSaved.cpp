
#include <cmath>
#include <iostream>

double precision(double in, unsigned int prec) {
    double f{std::pow(10, prec)};

    return ((int(std::round(in * f))) / f);
}

double timeSaved(int lim, int avg, int d) {
    auto minutesAtAvg{double(d / double(avg)) * 60.0};
    auto minutesAtLim{double(d / double(lim)) * 60.0};

    auto minutesSaved{precision(minutesAtLim - minutesAtAvg, 1)};
    return minutesSaved;
}

int main() {
    std::cout << std::boolalpha << (timeSaved(80, 90, 40) == 3.3) << std::endl;
    std::cout << std::boolalpha << (timeSaved(80, 90, 4000) == 333.3) << std::endl;
    std::cout << std::boolalpha << (timeSaved(80, 100, 40) == 6.0) << std::endl;
    std::cout << std::boolalpha << (timeSaved(80, 95, 200) == 23.7) << std::endl;
}