
#include <cmath>
#include <iostream>

int ageDifference(int fAge, int sAge) {
    return std::abs((2 * sAge) - fAge);
}

int main() {
    std::cout << std::boolalpha << (ageDifference(42, 21) == 0) << std::endl;
    std::cout << std::boolalpha << (ageDifference(55, 30) == 5) << std::endl;
    std::cout << std::boolalpha << (ageDifference(36, 7) == 22) << std::endl;
}