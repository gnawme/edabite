#include <iostream>
#include <string>

bool isPrefix(std::string word, std::string prefix) {
    auto rprefix{prefix.substr(0, prefix.length() - 1)};
    return (word.find(rprefix) != std::string::npos);
}

bool isSuffix(std::string word, std::string suffix) {
    auto rsuffix{suffix.substr(1, suffix.length() - 1)};
    return (word.find(rsuffix) != std::string::npos);
}

int main() {
    std::cout << std::boolalpha << (isPrefix("automation", "auto-") == true) << std::endl;
    std::cout << std::boolalpha << (isSuffix("arachnophobia", "-phobia") == true) << std::endl;
    std::cout << std::boolalpha << (isPrefix("retrospect", "sub-") == false) << std::endl;
    std::cout << std::boolalpha << (isSuffix("vocation", "-logy") == false) << std::endl;
}