#include <iostream>

int summa(int num) {
    auto summer = 0;
    while (num != 0) {
        summer += num % 10;
        num /= 10;
    }

    return summer;
}

int sumDigits(int a, int b) {
    auto sumall = 0;

    for (auto i = a; i <= b; ++i) {
        sumall += summa(i);
    }

    return sumall;
}

int main() {
    std::cout << std::boolalpha << (sumDigits(17, 20) == 29) << std::endl;
}