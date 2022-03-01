#include <iostream>
#include <string>
#include <vector>

int countCharacters(std::vector<std::string> arr) {
    auto count{0u};
    for (const auto& line : arr) {
        count += line.length();
    }

    return count;
}

int main() {
    std::vector<std::string> test1{{"###"}, {"###"}, {"###"}};

    std::cout << std::boolalpha << (countCharacters(test1) == 9) << std::endl;
}