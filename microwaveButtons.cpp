#include <algorithm>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

/// @note Always add 1 for the Start button
int microwaveButtons(std::string time) {
    auto mm = time.substr(0, 2);
    auto ss = time.substr(3, 2);

    auto mmVal = std::stoi(mm);
    auto ssVal = std::stoi(ss);
    auto totalSeconds = mmVal * 60 + ssVal;

    std::vector<int> presses(totalSeconds + 1, std::numeric_limits<int>::max());
    presses[0] = 1;

    for (auto i = 0; i < totalSeconds + 1; ++i) {
        for (auto j = 0; j < 10; ++j) {
            auto newTime = i * 10 + j;
            if (newTime <= totalSeconds) {
                presses[newTime] = std::min(presses[newTime], presses[i] + 1);
            }
        }

        if ((i + 30) <= totalSeconds) {
            presses[i + 30] = std::min(presses[i + 30], presses[i] + 1);
        }
    }

    auto numPresses = presses[totalSeconds];
    if (mmVal >= 10 && mmVal <= 16) {
        ++numPresses;
    }

    return numPresses;
}

int main() {
#if 0
    std::cout << std::boolalpha << (microwaveButtons("00:30") == 2) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("01:00") == 3) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("00:60") == 3) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("00:20") == 3) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("00:10") == 3) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("00:70") == 3) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("10:00") == 5) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("16:00") == 5) << std::endl;
    std::cout << std::boolalpha << (microwaveButtons("00:00") == 1) << std::endl;
#endif
    for (auto i = 10; i < 18; ++i) {
        std::stringstream ss;
        ss << std::setw(2) << std::setfill('0') << i;
        std::string mm = ss.str();
        mm.append(":00");
        std::cout << std::boolalpha << (microwaveButtons(mm) == 5) << std::endl;
    }
}