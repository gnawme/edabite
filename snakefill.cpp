
#include <iostream>

int snakefill(int n) {
    int totalSpace = n * n;

    int snakeLength = 1;
    int numMeals = 0;

    while (snakeLength <= totalSpace) {
        ++numMeals;
        snakeLength *= 2;
    }

    return (numMeals - 1);
}

int main() {
    std::cout << std::boolalpha << (snakefill(3) == 3) << std::endl;
    std::cout << std::boolalpha << (snakefill(6) == 5) << std::endl;
    std::cout << std::boolalpha << (snakefill(8) == 6) << std::endl;
    std::cout << std::boolalpha << (snakefill(24) == 9) << std::endl;
}