#include <algorithm>
#include <iostream>
#include <vector>

float median(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    if (arr.size() % 2 == 0) {
        auto half = arr.size() / 2;
        auto median = float(arr[half] + arr[half - 1]) / 2.0f;
        return median;
    } else {
        return float(arr[arr.size() / 2]);
    }

    return 0.f;
}

int main() {
    std::vector<int> test1{342, 98, 5456, 32, 786, 432, 890, 321};
    std::cout << std::boolalpha << (median(test1) == 387) << std::endl;

    std::vector<int> test2{1, 0, 1, 0, 0, 0, 1, 1};
    std::cout << std::boolalpha << (median(test2) == 0.5) << std::endl;
}