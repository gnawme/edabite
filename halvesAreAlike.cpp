#include <cctype>
#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    bool halvesAreAlike(std::string s) {
        std::unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        auto slen{s.length() / 2};
        std::string upper{s.substr(0, slen - 1)};
        std::string lower{s.substr(slen, s.length())};
        std::cout << upper << " : " << lower << std::endl;
    }
};

int main() {
    Solution solution;
    std::string test1{"AbCdEfGh"};
    std::cout << std::boolalpha << (solution.halvesAreAlike(test1) == true) << std::endl;
}