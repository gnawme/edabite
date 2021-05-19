#include <algorithm>
#include <iostream>
#include <string>

bool isInOrder(std::string str) {
    std::string sordid(str);
    std::sort(sordid.begin(), sordid.end());

    return (str == sordid);
}

int main() {
    std::string test1{"edabit"};
    std::cout << std::boolalpha << (isInOrder(test1) == false) << std::endl;
    std::string test2{""};
    std::cout << std::boolalpha << (isInOrder(test2) == true) << std::endl;
}