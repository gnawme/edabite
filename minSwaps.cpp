#include <algorithm>
#include <iostream>
#include <string>

int minSwaps(std::string s1, std::string s2) {
    return {};
}

int main() {
    std::string s1("10011001");
    std::string s2("01100110");

    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());

    std::cout << s1 << ":" << s2 << std::endl;
}