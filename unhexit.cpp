#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::istringstream hexStream("ffdaffe8");
    std::vector<unsigned char> bytes;
    std::cout << hexStream.str() << std::endl;
    unsigned int c;
    while (hexStream >> std::hex >> c) {
        std::cout << c << std::endl;
        bytes.push_back(c);
    }

    std::cout << "length: " << bytes.size() << std::endl;
}