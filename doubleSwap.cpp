#include <iostream>
#include <string>

std::string doubleSwap(std::string s, char c1, char c2) {
    for (auto& current : s) {
        if (current == c1) {
            current = c2;
        } else if (current == c2) {
            current = c1;
        }
    }

    return s;
}

int main() {
    std::cout << std::boolalpha << (doubleSwap("aabbccc", 'a', 'b') == "bbaaccc") << std::endl;
}