#include <iostream>
#include <vector>

std::vector<std::vector<int>> pairs(std::vector<int> arr) {
    auto head = 0;
    auto tail = arr.size() - 1;

    std::vector<std::vector<int>> pairs;
    while (head <= tail) {
        std::vector<int> pair;
        if (head < tail) {
            pair.push_back(arr[head]);
            pair.push_back(arr[tail]);
        } else {
            pair.push_back(arr[head]);
            pair.push_back(arr[head]);
        }
        ++head;
        --tail;
        pairs.push_back(pair);
    }

    return pairs;
}

int main() {
    std::vector<int> values{1, 2, 3, 4, 5, 6, 7};
    auto aupair{pairs(values)};
    for (const auto& pairs : aupair) {
        std::cout << "[" << pairs[0] << ", " << pairs[1] << "]" << std::endl;
    }
}