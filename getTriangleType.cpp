#include <iostream>
#include <set>
#include <string>
#include <vector>

std::string getTriangleType(std::vector<int> arr) {
    constexpr char SCALENE[]{"scalene"};
    constexpr char ISOSCELES[]{"isosceles"};
    constexpr char EQUILATERAL[]{"equilateral"};
    constexpr char NOSSING[]{"not a triangle"};

    constexpr std::size_t TRI_SIDES{3};
    if (arr.size() != TRI_SIDES) {
        return {NOSSING};
    }

    std::multiset<int> sides(arr.begin(), arr.end());

    for (const auto& side : sides) {
        if (sides.count(side) == 3) {
            return {EQUILATERAL};
        } else if (sides.count(side) == 2) {
            return {ISOSCELES};
        }
    }

    return {SCALENE};
}

int main() {
    std::vector<int> t1{2, 6, 5};
    std::cout << std::boolalpha << (getTriangleType(t1) == "scalene") << std::endl;

    std::vector<int> t2{4, 4, 7};
    std::cout << std::boolalpha << (getTriangleType(t2) == "isosceles") << std::endl;
}