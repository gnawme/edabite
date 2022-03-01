#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

double myPi(int n) {
    constexpr char MY_PI[]{"3.14159265358979323846264338327950288"};

    std::string pez(std::string(MY_PI).substr(0, 2 + n + 1));
    auto penult{2 + n};
    
    if (std::atoi(pez[penult]) >= 5) {
        auto bump{pez[penult - 1] - '0'};
        ++bump;
        while (bump > 10) {
            pez[penult - 1] = char(0 + '0');
            --penult;
            bump = pez[penult - 1] - '0';
        }
        pez[penult - 1] = char(bump + '0')
    }

    pez = pez.substr(0, pez.length() - 1);

    char* end{nullptr};
    double val{std::strtod(pez.c_str(), &end)};

    return double(std::round(val));
}

int main() {
    std::cout << myPi(5) << std::endl;
    std::cout << std::setprecision(15 + 1) << myPi(15) << std::endl;
}