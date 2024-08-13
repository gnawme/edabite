#include <cmath>
#include <iostream>


int integral(int b, int m, int n) {
    // f(x)=(b+1)*x^b = (x ^ (b + 1)) + C
    auto fb = std::pow(n, b + 1);
    auto fa = std::pow(m, b + 1);

    return fb - fa;
}

int main() {
    std::cout << std::boolalpha << (integral(0, 2, 5) == 3) << std::endl;
}