#include <iostream>
#include <string>

std::string stringCycling(std::string a, std::string b) {
    if (a.length() > b.length()) {
        return a.substr(0, b.length());
    }

    std::string cycled = a;
    while (cycled.length() < b.length()) {
        auto remain = b.length() - cycled.length();
        if (remain > a.length()) {
            cycled.append(a);
        } else {
            cycled.append(a.substr(0, remain));
        }
    }

    return cycled;
}

int main() {
    std::cout << stringCycling("abc", "hello") << std::endl;
    std::cout << stringCycling("programming", "edabit") << std::endl;
    std::cout << stringCycling("ha", "good morning") << std::endl;
}