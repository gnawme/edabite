#include <iostream>
#include <string>

std::string joinPath(std::string portion1, std::string portion2) {
    auto trailer = portion1.find('/');
    auto header = portion2.find('/');

    if (trailer != std::string::npos) {
        portion1 = portion1.substr(0, trailer);
    }

    if (header != std::string::npos) {
        portion2 = portion2.substr(header + 1);
    }

    auto joined = portion1;
    joined.push_back('/');
    joined.append(portion2);

    return joined;
}

int main() {
    std::cout << joinPath("portion1", "portion2") << std::endl;
    std::cout << joinPath("portion1/", "portion2") << std::endl;
    std::cout << joinPath("portion1", "/portion2") << std::endl;
    std::cout << joinPath("portion1/", "/portion2") << std::endl;
}