#include <cctype>
#include <iostream>
#include <set>
#include <string>

bool isVowel(char ami) {
    const std::set<char> VOWELS{'a', 'e', 'i', 'o', 'u'};

    return (VOWELS.find(std::tolower(ami)) != VOWELS.end());
}

std::string split(std::string str) {
    std::string vowels;
    std::string conson;

    for (const auto& vow : str) {
        if (isVowel(vow)) {
            vowels.push_back(vow);
        } else {
            conson.push_back(vow);
        }
    }

    vowels.append(conson);
    return vowels;
}

int main() {
    std::cout << std::boolalpha << (split("abcde") == "aebcd") << std::endl;
    std::cout << std::boolalpha << (split("What's the time?") == "aeieWht's th tm?") << std::endl;
}