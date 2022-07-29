#include <iostream>
#include <string>

std::string wormLength(std::string worm) {
    std::string badWorm("invalid");
    if (worm.empty()) {
        return badWorm;
    }

    std::string segment("-");
    if (worm.find_first_not_of(segment) != std::string::npos) {
        return badWorm;
    }

    auto wormLenMM = worm.length() * 10;
    auto wormLenStr = std::to_string(wormLenMM);
    wormLenStr.append(" mm.");

    return wormLenStr;
}

int main() {
    std::cout << std::boolalpha << (wormLength("----------") == "100 mm.") << std::endl;
}