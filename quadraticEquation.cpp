
#include <cmath>
#include <iostream>

int quadraticEquation(int a, int b, int c) {
    auto discrim = (b * b) - (4 * a * c);
    if (discrim == 0) {
        return (-b / (2 * a));
    } else {
        auto squat = std::sqrt(std::abs(discrim));
        if (discrim > 0) {
            auto bova = -b + squat;
            return (bova / (2 * a));
        } else {
            auto imago = squat / (2 * a);
            return imago;
        }
    }

    return 0;
}

int main() {
    std::cout << std::boolalpha << (quadraticEquation(1, 2, 3) == 1) << std::endl;
    std::cout << std::boolalpha << (quadraticEquation(2, -7, 3) == 3) << std::endl;
    std::cout << std::boolalpha << (quadraticEquation(1, -12, -28) == 14) << std::endl;
}