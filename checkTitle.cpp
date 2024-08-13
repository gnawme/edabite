#include <cctype>
#include <iostream>
#include <string>
#include <vector>

bool checkTitle(std::string& title) {
    std::vector<std::string> words;

    auto sbeg = 0;
    auto send = title.find(' ');

    while (send != std::string::npos) {
        words.push_back(title.substr(sbeg, send - sbeg));
        sbeg = send + 1;
        send = title.find(' ', sbeg);
    }

    words.push_back(title.substr(sbeg));

    bool isTitle = true;
    for (const auto& word : words) {
        isTitle &= (std::isupper(word[0]) != 0);
    }

    return isTitle;
}

int main() {
    std::string t1{"A Simple Java Script Program!"};
    std::cout << std::boolalpha << (checkTitle(t1) == true) << std::endl;

    std::string t2{"Water is transparent"};
    std::cout << std::boolalpha << (checkTitle(t2) == false) << std::endl;
}