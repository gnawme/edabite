#include <cmath>
#include <iostream>

bool rectangleInCircle(int w, int h, int radius) {
    auto rectHyp = std::sqrt((w * w) + (h * h));
    return (rectHyp <= (2 * radius));
}

int main() {
    std::cout << std::boolalpha << (rectangleInCircle(5, 12, 7) == true) << std::endl;
    std::cout << std::boolalpha << (rectangleInCircle(5, 12, 6) == false) << std::endl;
    std::cout << std::boolalpha << (rectangleInCircle(3, 7, 4) == true) << std::endl;
    std::cout << std::boolalpha << (rectangleInCircle(4, 7, 4) == false) << std::endl;
}

// Describe(rectangle_in_circle)
//{
//  It(test1){Assert::That(rectangleInCircle(5, 12, 7), Equals(true));}
//	It(test2){Assert::That(rectangleInCircle(5, 12, 6), Equals(false));}
//	It(test3){Assert::That(rectangleInCircle(3, 7, 4), Equals(true));}
//	It(test4){Assert::That(rectangleInCircle(4, 7, 4), Equals(false));}
//	It(test5){Assert::That(rectangleInCircle(11, 1, 6), Equals(true));}
//	It(test6){Assert::That(rectangleInCircle(21, 12, 12), Equals(false));}
//};