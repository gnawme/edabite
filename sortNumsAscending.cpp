#include <iostream>
#include <set>
#include <vector>

std::vector<int> sortNumsAscending(std::vector<int> arr) {
    std::multiset<int> sordid;
    for (const auto& val : arr) {
        sordid.insert(val);
    }

    return {sordid.begin(), sordid.end()};
}

int main() {
    std::vector<int> test1{80, 29, 4, -95, -24, 85};
    auto test1Out{sortNumsAscending(test1)};
    for (const auto& sort : test1Out) {
        std::cout << sort << " ";
    }
    std::cout << std::endl;
}