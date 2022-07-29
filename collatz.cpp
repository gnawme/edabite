#include <iostream>
#include <limits>
#include <vector>

std::vector<int> collatz(int n) {
    std::vector<int> result;

    if (n == 1) {
        result.push_back(0);
        result.push_back(1);
        return result;
    }

    auto numOps = 0;
    int maxVal = std::numeric_limits<int>::min();
    do {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n += 1;
        }
        if (n > maxVal) {
            maxVal = n;
        }
        ++numOps;
    } while (n != 1);

    result.push_back(numOps);
    result.push_back(maxVal);
    return result;
}

int main() {
    auto res1 = collatz(17);
    std::cout << std::boolalpha << (res1[0] == 12) << std::endl;
    std::cout << std::boolalpha << (res1[1] == 52) << std::endl;
}