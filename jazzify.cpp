#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> jazzify(std::vector<std::string>& arr) {
    if (arr.empty()) {
        return {};
    }

    std::vector<std::string> jazzed;
    const std::string seventh("7");
    for (auto& note : arr) {
        auto blued = note.find(seventh);
        if (blued == std::string::npos) {
            auto jazzy = note + seventh;
            jazzed.emplace_back(jazzy);
        } else {
            jazzed.emplace_back(note);
        }
    }

    return jazzed;
}

int main() {
    std::vector<std::string> test1{"Dm", "G", "E", "A"};

    auto jazzed1{jazzify(test1)};
    for (const auto& jazzy : jazzed1) {
        std::cout << jazzy << " ";
    }

    std::cout << std::endl;

    std::vector<std::string> test2{"F7", "E7", "A7", "Ab7", "Gm7", "C7"};
    auto jazzed2{jazzify(test2)};
    for (const auto& jazzy : jazzed2) {
        std::cout << jazzy << " ";
    }

    std::cout << std::endl;
}