#include <iostream>
#include <string>

std::string removeLastVowel(std::string str) {
    const char* vowels{"AEIOUaeiou"};

    std::string ouster;
    std::string disemvoweled;
    while (!str.empty()) {
        auto blank = str.find(' ');
        if (blank == std::string::npos) {
            auto vowel = str.find_last_of(vowels);
            if (vowel != std::string::npos) {
                str.erase(vowel, 1);
                disemvoweled.append(str);
                break;
            }
        } else {
            auto pez = str.substr(0, blank + 1);
            str = str.substr(blank + 1);

            auto vowel = pez.find_last_of(vowels);
            if (vowel != std::string::npos) {
                pez.erase(vowel, 1);
                disemvoweled.append(pez);
            }
        }
    }

    return disemvoweled;
}

int main() {
    std::string test1{"Those who dare to fail miserably can achieve greatly."};
    std::cout << removeLastVowel(test1) << std::endl;

    std::string test2{"If you want to live a happy life, tie it to a goal, not to people."};
    std::cout << removeLastVowel(test2) << std::endl;
}