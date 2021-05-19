#include <algorithm>
#include <iostream>

int cars(int wheels, int bodies, int figures) {
    auto wheelsComplete = int(wheels / 4);
    auto figuresComplete = int(figures / 2);

    auto numComplete = std::min(wheelsComplete, figuresComplete);

    return std::min(bodies, numComplete);
}

int main() {
    std::cout << std::boolalpha << (cars(2, 48, 76) == 0) << std::endl;
    std::cout << std::boolalpha << (cars(43, 15, 87) == 10) << std::endl;
}