#include <iostream>
#include <string>

std::string uncensor(std::string str, std::string vowels) {
    auto idx = 0;

    for (auto& lettre : str) {
        if (lettre == '*') {
            lettre = vowels[idx];
            ++idx;
        }
    }

    return str;
}

int main() {
    std::cout << std::boolalpha
              << (uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") == "Where did my vowels go?")
              << std::endl;

    std::cout << std::boolalpha << (uncensor("abcd", "") == "abcd") << std::endl;
}