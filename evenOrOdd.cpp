#include <iostream>
#include <string>

std::string evenOrOdd(std::string str) {
    auto odds = 0;
    auto evens = 0;
    for (auto& num : str) {
        int value = int(num - '0');
        if (value % 2 == 0) {
            evens += value;
        } else {
            odds += value;
        }
    }

    std::string oddBigger("Odd is greater than Even");
    std::string eveBigger("Even is greater than Odd");
    std::string sameSame("Even and Odd are the same");

    if (odds > evens) {
        return oddBigger;
    } else if (odds < evens) {
        return eveBigger;
    }

    return sameSame;
}

int main() {
    std::cout << evenOrOdd("22471") << std::endl;
}