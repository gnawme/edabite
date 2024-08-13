#include <cctype>
#include <iostream>
#include <string>

std::string selectLetters(std::string s1, std::string s2) {
    std::string answer;
    auto idx = 0;
    while (idx < s1.length() && idx < s2.length()) {
        if (std::isupper(s2[idx])) {
            answer.push_back(s1[idx]);
        }
        ++idx;
    }

    idx = 0;
    while (idx < s2.length() && idx < s1.length()) {
        if (std::isupper(s1[idx])) {
            answer.push_back(s2[idx]);
        }
        ++idx;
    }

    return answer;
}

int main() {
    std::string ts1{"EVERYTHING"};
    std::string ts2{"SomeThings"};
    std::string a1{"EYSomeThings"};
    std::cout << std::boolalpha << (selectLetters(ts1, ts2) == a1) << std::endl;
}