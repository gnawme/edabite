#include <algorithm>
#include <iostream>
#include <string>

std::string unmix(const std::string& str) {
    std::string result;
    auto index = 0;
    while (index < str.length()) {
        auto sub = str.substr(index, 2);
        std::reverse(sub.begin(), sub.end());
        result.append(sub);
        index += 2;
    }

    return result;
}

int main() {
    std::string s1{"123456"};
    std::cout << std::boolalpha << (unmix(s1) == std::string("214365")) << std::endl;

    std::string s2{"hTsii  s aimex dpus rtni.g"};
    std::cout << std::boolalpha << (unmix(s2) == std::string("This is a mixed up string."))
              << std::endl;
}