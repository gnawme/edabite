#include <iostream>

int solveForExp(int a, int b) {
    
}

int collatz(int num) {
    int numcopy{num};
    int numSteps{0};

    while (numcopy != 1) {
        if ((numcopy % 2) == 0) {
            numcopy /= 2;
            ++numSteps;
        } else {
            numcopy = (numcopy * 3) + 1;
            ++numSteps;
        }
    }

    return numSteps;
}

bool lastDig(int a, int b, int c) {
    auto aLast = a % 10;
    auto bLast = b % 10;
    auto cLast = c % 10;

    auto pLast = (aLast * bLast) % 10;

    return (pLast == cLast);
}

int main() {
    std::cout << std::boolalpha << lastDig(25, 21, 125) << std::endl;
    std::cout << std::boolalpha << lastDig(55, 226, 5190) << std::endl;

    std::cout << std::boolalpha << (collatz(2) == 1) << std::endl;
    std::cout << std::boolalpha << (collatz(3) == 7) << std::endl;
}