#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> capMe(std::vector<std::string> arr) {
    for (auto& nom : arr) {
        std::transform(nom.begin(), nom.end(), nom.begin(), [](char c) { return std::tolower(c); });
        nom[0] = std::toupper(nom[0]);
    }

    return arr;
}

int main() {
    std::vector<std::string> test1{"samuel", "MABELLE", "letitia", "meridith"};
    auto test1Out{capMe(test1)};
    for (const auto& cap : test1Out) {
        std::cout << cap << std::endl;
    }
}