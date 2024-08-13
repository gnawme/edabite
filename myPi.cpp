#include <cmath>
#include <iostream>

double myPi(int n) {
    auto powwow = std::pow(10.0, n);
    auto shifted = std::round(M_PI * powwow);

    return shifted / powwow;
}

int main() {
    auto t1 = 5;
    std::cout << "PI to " << t1 << " places: " << myPi(t1) << std::endl;
}