
#include <iostream>
#include <stack>
#include <string>

void digitize(int n, std::string& joined) {
    std::string conn{"-"};
    std::stack<int> digits;
    auto j = n;
    while (j > 0) {
        digits.push(j % 10);
        j /= 10;
    }

    while (!digits.empty()) {
        joined.append(std::to_string(digits.top()));
        joined.append(conn);
        digits.pop();
    }
}

std::string joinDigits(int n) {
    std::string joined;
    std::string conn{"-"};

    for (auto i = 1; i < n; ++i) {
        if (i < 10) {
            joined.append(std::to_string(i));
            joined.append(conn);
        } else {
            digitize(i, joined);
        }
    }

    if (n < 10) {
        joined.append(std::to_string(n));
    } else {
        digitize(n, joined);
    }

    if (joined[joined.length() - 1] == '-') {
        joined = joined.substr(0, joined.length() - 1);
    }
    return joined;
}

int main() {
    for (auto i = 1; i < 15; ++i) {
        std::cout << joinDigits(i) << std::endl;
    }
}