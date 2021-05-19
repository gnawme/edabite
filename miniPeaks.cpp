#include <iostream>
#include <vector>

std::vector<int> miniPeaks(std::vector<int> arr) {
    if (arr.empty()) {
        return {};
    }

    std::vector<int> peaks;
    for (auto i = 1; i < arr.size() - 1; ++i) {
        if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) {
            peaks.push_back(arr[i]);
        }
    }

    return peaks;
}

int main() {
    std::vector<int> test1{4, 5, 2, 1, 4, 9, 7, 2};
    auto test1Out{miniPeaks(test1)};

    for (const auto& peak : test1Out) {
        std::cout << peak << " ";
    }
    std::cout << std::endl;

    std::vector<int> test2{1, 2, 3, 4, 5, 6};
    auto test2Out{miniPeaks(test2)};
    std::cout << std::boolalpha << test2Out.empty() << std::endl;
}