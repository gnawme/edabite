#include <iostream>
#include <string>

int countWords(std::string str) {
    std::size_t found{0u};

    auto numFound{0};
    while (found != std::string::npos) {
        found = str.find(' ', found);
        if (found != std::string::npos) {
            ++numFound;
            ++found;
            found = str.find(' ', found);
        } else {
            break;
        }
    }

    ++numFound;

    return numFound;
}

int main() {
    std::string test1{"Just an example here move along"};
    std::cout << std::boolalpha << (countWords(test1) == 6) << std::endl;

    std::string test2{"What an easy task, right"};
    std::cout << std::boolalpha << (countWords(test2) == 5) << std::endl;
}