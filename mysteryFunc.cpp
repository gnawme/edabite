#include <iostream>

int mysteryFunc(int num) {
    auto prod = 1;

    while (num > 0) {
        auto digit = num % 10;
        prod *= digit;
        num /= 10;
    }

    return prod;
}

int main() {
    std::cout << std::boolalpha << (mysteryFunc(152) == 10) << std::endl;
}