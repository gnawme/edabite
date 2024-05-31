#include <iostream>
#include <vector>


int combinations(std::vector<int> items) {
    auto combo = 1;
    for (const auto& item : items) {
        if (item != 0) {
            combo *= item;
        }
    }

    return combo;
}


int main() {
    std::vector<int> test1{2, 3, 4, 5};
    std::cout << std::boolalpha << (combinations(test1) == 120) << std::endl;
    std::vector<int> test2{3, 7, 4};
    std::cout << std::boolalpha << (combinations(test2) == 84) << std::endl;
    std::vector<int> test3{6, 7, 0};
    std::cout << std::boolalpha << (combinations(test3) == 42) << std::endl;
}