#include <iostream>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }

    if (b == 0) {
        return a;
    }

    if (a == b) {
        return a;
    }

    if (a > b) {
        return gcd(a - b, b);
    } else {
        return gcd(a, b - a);
    }
}

int main() {
    int a = 98, b = 56;
    std::cout << gcd(a, b) << std::endl;
    int c = 10, d = 20;
    std::cout << gcd(c, d) << std::endl;
}