#include <iostream>
#include <vector>

std::vector<std::vector<char>> multiply(std::vector<char> arr) {
    auto multi = arr.size();

    std::vector<std::vector<char>> clones;
    for (const auto& archar : arr) {
        std::vector<char> clone(multi, archar);
        clones.emplace_back(clone);
    }

    return clones;
}

int main() {
    std::vector<char> arr1{'*', '%', '$'};
    auto res1 = multiply(arr1);
    for (const auto& res : res1) {
        for (const auto& r : res) {
            std::cout << r << " ";
        }
        std::cout << std::endl;
    }
}