#include <cctype>
#include <iostream>
#include <map>
#include <string>

int sumOfVowels(std::string str) {
    std::map<char, int> VOWEL_MAP{{'a', 4}, {'e', 3}, {'i', 1}, {'o', 0}};

    auto sum = 0;
    for (const auto& vow : str) {
        auto sit = VOWEL_MAP.find(std::tolower(vow));
        if (sit != VOWEL_MAP.end()) {
            sum += sit->second;
        }
    }

    return sum;
}

int main() {
    std::cout << std::boolalpha << (sumOfVowels("Let\'s test this function.") == 8) << std::endl;
}