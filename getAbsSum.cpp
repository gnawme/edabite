#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

int getAbsSum(std::vector<int> arr) {
    std::vector<int> valor;
    std::transform(
            arr.begin(), arr.end(), std::back_inserter(valor), [](int v) { return std::abs(v); });

    auto summer{0};
    for (const auto& num : valor) {
        summer += num;
    }

    return summer;
}

int main() {
    std::vector<int> test1{2, -1, 4, 8, 10};
    std::cout << std::boolalpha << (getAbsSum(test1) == 25) << std::endl;
}