#include <iostream>
#include <vector>

std::vector<int> evenOddTransform(std::vector<int> arr, int n) {
    int oddTransform = 2 * n;
    int eveTransform = -2 * n;

    std::vector<int> xmen;
    for (const auto& val : arr) {
        if (val % 2 == 0) {
            auto eve = val + eveTransform;
            xmen.push_back(eve);
        } else {
            auto odd = val + oddTransform;
            xmen.push_back(odd);
        }
    }

    return xmen;
}

int main() {
    std::vector<int> test1{1, 2, 3};
    auto test1Out{evenOddTransform(test1, 1)};
    for (const auto& out : test1Out) {
        std::cout << out << " ";
    }
    std::cout << std::endl;
}