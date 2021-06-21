#include <iostream>
#include <set>
#include <vector>

int product(std::vector<int> arr) {
    if (arr.empty()) {
        return 0;
    }

    std::set<int> matey(arr.begin(), arr.end());

    if ((matey.size() == 1) && (arr.size() > 1)) {
        auto only = matey.begin();
        return *only * *only;
    }

    auto largest = matey.rbegin();
    auto big1 = *largest;
    ++largest;
    auto big2 = *largest;
    return (big1 * big2);
}

int main() {
    std::vector<int> test1{2, 3, 1, -1, 2};
    std::cout << std::boolalpha << (product(test1) == 6) << std::endl;

    std::vector<int> test2{-2, -2, -1, -1};
    std::cout << std::boolalpha << (product(test2) == 2) << std::endl;

    std::vector<int> test3{8, 8, 8};
    std::cout << std::boolalpha << (product(test3) == 64) << std::endl;
}