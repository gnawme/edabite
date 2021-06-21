#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> firstAndLast(std::string s) {
    std::string sless(s);
    std::string smore(s);

    std::sort(sless.begin(), sless.end());
    std::sort(smore.begin(), smore.end(), std::greater<char>());

    std::vector<std::string> ret{sless, smore};
    return ret;
}

int main() {
    auto test1Out(firstAndLast("marmite"));
    for (const auto& test : test1Out) {
        std::cout << test << std::endl;
    }
}