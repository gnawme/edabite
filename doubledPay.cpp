#include <iostream>

unsigned int doubledPay(unsigned int n) {
    unsigned int payday{0};
    unsigned int lastpay{1};

    for (auto i = 0; i < n; ++i) {
        payday += lastpay;
        lastpay *= 2;
    }

    return payday;
}

int main() {
    std::cout << std::boolalpha << (doubledPay(2) == 3) << std::endl;
    std::cout << std::boolalpha << (doubledPay(3) == 7) << std::endl;
}