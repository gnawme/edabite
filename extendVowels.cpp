#include <iostream>
#include <set>
#include <string>

std::string extendVowels(const std::string& word, int num) {
    const std::set<char> VOWELS{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    std::string result;
    for (const auto& wordle : word) {
        auto wit = VOWELS.find(wordle);
        if (wit != VOWELS.end()) {
            result.append(num + 1, wordle);
        } else {
            result.append(1, wordle);
        }
    }

    return result;
}

int main() {
    std::string s1{"Hello"};
    std::cout << std::boolalpha << (extendVowels(s1, 5) == std::string("Heeeeeelloooooo"))
              << std::endl;
}