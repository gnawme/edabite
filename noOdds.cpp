#include <iostream>
#include <vector>

std::vector<int> noOdds(std::vector<int> arr) {
    auto j = 0;
    for (auto i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            arr[j++] = arr[i];
        }
    }

    arr.erase(arr.begin() + j, arr.end());
    return arr;
}

int main() {
    std::vector<int> test1{{148, 6, 16, 85}};
    auto test1Out{noOdds(test1)};
    for (const auto& out : test1Out) {
        std::cout << out << " ";
    }
    std::cout << std::endl;
}