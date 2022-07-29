#include <iostream>
#include <string>

std::string dominoChain(std::string& dominos) {
    for (auto& domino : dominos) {
        switch (domino) {
        case '|':
            domino = '/';
            break;
        case ' ':
        case '/':
        default:
            return dominos;
        }
    }

    return dominos;
}

int main() {
    std::string t1 = {"||| ||||//| |/"};
    std::cout << std::boolalpha << (dominoChain(t1) == "/// ||||//| |/") << std::endl;
}