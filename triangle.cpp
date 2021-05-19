#include <iostream>

int triangle(int n) {
	return int(0.5 * (n * (n + 1)));
}

int main() {
    std::cout << std::boolalpha << (triangle(215) == 23220) << std::endl;
}