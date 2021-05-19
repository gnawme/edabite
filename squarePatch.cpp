#include <iostream>
#include <vector>

std::vector<std::vector<int>> squarePatch(int n) {
    std::vector<int> row(n, n);
    std::vector<std::vector<int>> square(n, row);

    return square;
}

int main() {
    auto square5{squarePatch(5)};
    for (const auto& row : square5) {
        for (auto i = 0; i < 5; ++i) {
            std::cout << row[i] << " ";
        }
        std::cout << std::endl;
    }
}