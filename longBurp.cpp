#include <iostream>
#include <string>

std::string longBurp(int num) {
    std::string bu{"Bu"};
    std::string p{"p"};
    std::string arrs(num, 'r');

    bu.append(arrs);
    bu.append(p);
    return bu;
}

int main() {
    std::cout << longBurp(5) << std::endl;
}