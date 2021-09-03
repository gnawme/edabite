#include <iostream>
#include <vector>

std::vector<int> sumOddAndEven(std::vector<int> arr) {
    int sumOdd{0};
    int sumEven{0};

    for (const auto& value : arr) {
        if (value == 0) {
            continue;
        }

        if (value % 2 == 0) {
            sumEven += value;
        } else {
            sumOdd += value;
        }
    }

    std::vector<int> sumz{sumEven, sumOdd};
    return sumz;
}

int main() {
    std::vector<int> test1{1, 2, 3, 4, 5, 6};
    auto ret1{sumOddAndEven(test1)};
    std::cout << ret1[0] << ":" << ret1[1] << std::endl;
}