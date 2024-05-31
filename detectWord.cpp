#include <cctype>
#include <iostream>
#include <string>

std::string detectWord(std::string str) {
    std::string word;

    for (const auto& check : str) {
        if (std::islower(check)) {
            word.push_back(check);
        }
    }

    return word;
}

std::string detectWordInPlace(std::string str) {
    auto tail = 0;
    for (auto current = 0; current < str.length(); ++current) {
        if (std::islower(str[current])) {
            str[tail] = str[current];
            ++tail;
        }
    }

    return str.substr(0, tail);
}

int main() {
    std::string test1{"UcUNFYGaFYFYGtNUH"};
    std::cout << std::boolalpha << (detectWord(test1) == detectWordInPlace(test1)) << std::endl;
}