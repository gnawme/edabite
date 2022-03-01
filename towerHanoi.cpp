#include <iostream>

void towerHanoi(char beg, char end, char tmp, int discs, int& steps) {
    ++steps;
    std::cout << "discs: " << discs << std::endl;
    if (discs == 1) {
        std::cout << "Disc 1 from " << beg << " to " << end << std::endl;
        return;
    } else {
        towerHanoi(beg, tmp, end, discs - 1, steps);
        std::cout << "Disc " << discs << " from " << beg << " to " << end << std::endl;
        towerHanoi(tmp, end, beg, discs - 1, steps);
    }
}

int towerHanoi(int discs) {

    int steps = 0;
    towerHanoi('A', 'B', 'C', discs, steps);
    std::cout << steps << std::endl;
    return steps;
}

int main() {
    std::cout << towerHanoi(1) << std::endl;
    std::cout << towerHanoi(2) << std::endl;

    std::cout << std::boolalpha << (towerHanoi(3) == 7) << std::endl;
    // std::cout << std::boolalpha << (towerHanoi(5) == 31) << std::endl;
}