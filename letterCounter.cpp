#include <iostream>
#include <vector>

int letterCounter(std::vector<std::vector<char>> arr, char c) {
    constexpr int NUM_SETS{5};

    auto numTarget{0};
    for (auto i = 0; i < NUM_SETS; ++i) {
        for (const auto& inc : arr[i]) {
            if (inc == c) {
                ++numTarget;
            }
        }
    }

    return numTarget;
}

int main() {
    std::vector<std::vector<char>> test1{
            {'D', 'E', 'Y', 'H', 'A', 'D'},
            {'C', 'B', 'Z', 'Y', 'J', 'K'},
            {'D', 'B', 'C', 'A', 'M', 'N'},
            {'F', 'G', 'G', 'R', 'S', 'R'},
            {'V', 'X', 'H', 'A', 'S', 'S'}};

    std::cout << std::boolalpha << (letterCounter(test1, 'D') == 3) << std::endl;
}