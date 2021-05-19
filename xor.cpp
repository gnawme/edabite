#include <iostream>
#include <utility>

std::pair<int, int> XOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    return std::make_pair(a, b);
}

int main() {
    auto swap1{XOR(12345, 890412)};
    auto& [a, b]{swap1};
    std::cout << a << ":" << b << std::endl;
}