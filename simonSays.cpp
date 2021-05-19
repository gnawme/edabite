#include <algorithm>
#include <iostream>
#include <vector>

bool simonSays(std::vector<int> arr1, std::vector<int> arr2) {
    auto i = arr1.begin();
    auto j = arr2.begin() + 1;

    bool same = true;
    while (j != arr2.end()) {
        same &= (*i == *j);
        ++i;
        ++j;
    }

    return same;
}

int main() {
    std::vector<int> test1a{1, 2, 3, 4, 5};
    std::vector<int> test1b{0, 1, 2, 3, 4};
    std::cout << std::boolalpha << simonSays(test1a, test1b) << std::endl;
}