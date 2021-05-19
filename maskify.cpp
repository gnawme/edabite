#include <iostream>
#include <string>

std::string maskify(std::string str) {
    if (str.empty()) {
        return {};
    }

    if (str.size() < 4) {
        return str;
    }

    std::string last4{str.substr(str.size() - 4)};
    std::string hashes(str.size() - 4, '#');
    return {hashes + last4};
}

int main() {
    std::string test1{"4556364607935616"};
    std::cout << test1 << std::endl << maskify(test1) << std::endl;

    std::cout << maskify("") << std::endl;
}
