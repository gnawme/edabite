#include <algorithm>
#include <iostream>
#include <string>

std::string reverseAndNot(int i) {
    std::string mirror = std::to_string(i);
    std::reverse(mirror.begin(), mirror.end());

    mirror.append(std::to_string(i));
    return mirror;
}

int main() {
    std::cout << std::boolalpha << (reverseAndNot(123456789) == std::string("987654321123456789"))
              << std::endl;
}