#include <algorithm>
#include <iostream>
#include <vector>

int howManyMissing(std::vector<int> arr) {
    if (arr.empty()) {
        return 0;
    }

    std::vector<int> theMissing;
    auto min{arr[0]};
    auto max{arr[arr.size() - 1]};
    for (auto i = min; i != max; ++i) {
        if (std::find(arr.begin(), arr.end(), i) == arr.end()) {
            theMissing.push_back(i);
        }
    }

    return theMissing.size();
}

int main() {
    std::vector<int> test1{7, 10, 11, 12};
    std::cout << std::boolalpha << (howManyMissing(test1) == 2) << std::endl;
}