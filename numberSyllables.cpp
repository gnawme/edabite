#include <iostream>
#include <string>

int numberSyllables(std::string word) {
    constexpr char DASH{'-'};
    auto numSyllables{0};
    auto dash{word.find_first_of(DASH)};
    while (dash != std::string::npos) {
        ++numSyllables;
        word = word.substr(dash + 1);
        dash = word.find_first_of(DASH);
    }

    return numSyllables + 1;
}

int main() {
    std::string test1{"mon-u-men-tal"};
    std::cout << std::boolalpha << (numberSyllables(test1) == 4) << std::endl;

    std::string test2{"buf-fet"};
    std::cout << std::boolalpha << (numberSyllables(test2) == 2) << std::endl;
}