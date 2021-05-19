#include <iostream>

int sumDigit(int positiveInteger) {
    if (positiveInteger == 0) {
        return 0;
    }

    auto digit{positiveInteger % 10};
    return digit + sumDigit(positiveInteger / 10);
}

int main() {
    std::cout << std::boolalpha << (sumDigit(111) == 3) << std::endl;
    std::cout << std::boolalpha << (sumDigit(333) == 9) << std::endl;
}