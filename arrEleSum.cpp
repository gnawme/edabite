#include <iostream>
#include <numeric>
#include <vector>

std::vector<int> arrEleSum(std::vector<int>& args) {
    std::vector<int> sums{};

    for (auto i = 0; i < args.size(); ++i) {
        std::vector<int> group{};
        for (auto j = 0; j < i; ++j) {
            group.push_back(args[j]);
        }

        for (auto j = i + 1; j < args.size(); ++j) {
            group.push_back(args[j]);
        }

        auto sum{std::accumulate(group.begin(), group.end(), 0)};
        sums.push_back(sum);
    }

    return sums;
}

int main() {
    std::vector<int> test1{1, 2, 3, 2, 1};
    auto test1Ret{arrEleSum(test1)};
    for (const auto& sum : test1Ret) {
        std::cout << sum << " ";
    }
    std::cout << std::endl;
}