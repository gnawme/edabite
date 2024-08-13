#include <cmath>
#include <iostream>

int tetra(int n) {
    auto nthTetrahedral = (n * (n + 1) * (n + 2)) / 6;
    return nthTetrahedral;
}

int main() {
    std::cout << std::boolalpha << (tetra(1) == 1) << std::endl;
    std::cout << std::boolalpha << (tetra(9) == 165) << std::endl;
}