#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

double discount(int price, int discount) {
    double off = price * (0.01 * discount);
    double discounted = double(price) - off;

    std::stringstream ss;
    ss << std::fixed << std::setprecision(2);
    ss << discounted;
    return std::stod(ss.str());
}

int main() {
    std::cout << std::boolalpha << (discount(1500, 50) == 750.00) << std::endl;
}