#include <cmath>
#include <iostream>

int circumference(int rad) {
    return int(2.0 * M_PI * rad);
}

int perimeter(int area) {
    return int(std::sqrt(area) * 4.0);
}

bool circleOrSquare(int rad, int area) {
    return (circumference(rad) >= perimeter(area));
}

int main() {
    std::cout << std::boolalpha << (circleOrSquare(16, 625) == true) << std::endl;
    std::cout << std::boolalpha << (circleOrSquare(5, 100) == false) << std::endl;
}