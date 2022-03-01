#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

std::vector<std::string> removeDups(std::vector<std::string> arr) {
    std::vector<std::string> uniq;
    for (const auto& item : arr) {
        auto inset = std::find(uniq.begin(), uniq.end(), item);
        if (inset == uniq.end()) {
            uniq.push_back(item);
        }
    }

    return uniq;
}

int main() {
    std::vector<std::string> test1{
            "javascript", "python", "python", "ruby", "javascript", "c", "ruby"};

    auto test1Out{removeDups(test1)};
    for (const auto& elm : test1Out) {
        std::cout << elm << " ";
    }
    std::cout << std::endl;
}