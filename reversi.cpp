#include <iostream>
#include <string>

void reversi(std::string& revved, std::string str) {
    if (str.empty()) {
        return;
    }

    revved.push_back(str[str.length() - 1]);
    reversi(revved, str.substr(0, str.length() - 1));
}

std::string reverse(std::string str) {
    if (str.empty()) {
        return {};
    }

    std::string revved;
    reversi(revved, str);

    return revved;
}

int main() {
    std::string test1{"hello"};
    std::cout << std::boolalpha << (reverse(test1) == std::string("olleh")) << std::endl;
    std::string test2{"world"};
    std::cout << std::boolalpha << (reverse(test2) == std::string("dlrow")) << std::endl;
}