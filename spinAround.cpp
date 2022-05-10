#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int spinAround(std::vector<std::string> r) {
    auto resultant = 0;
    for (const auto& direction : r) {
        if (direction == "right") {
            resultant += 90;
        } else {
            resultant -= 90;
        }
    }

    return std::abs(int(resultant / 360));
}

int main() {
    std::vector<std::string> test1{"left", "right", "left", "right"};
    std::cout << std::boolalpha << (spinAround(test1) == 0) << std::endl;

    std::vector<std::string> test2{
            "right", "right", "right", "right", "right", "right", "right", "right"};
    std::cout << std::boolalpha << (spinAround(test2) == 2) << std::endl;
}