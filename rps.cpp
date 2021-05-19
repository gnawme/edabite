#include <iostream>
#include <map>
#include <string>

std::string rps(std::string s1, std::string s2) {
    std::map<std::string, std::string> BEATS{
            {"rock", "scissors"}, {"paper", "rock"}, {"scissors", "paper"}};

    if (s1 == s2) {
        return {"TIE"};
    }

    auto s1Wins = BEATS[s1];
    if (s1Wins == s2) {
        return {"Player 1 wins"};
    } else {
        return {"Player 2 wins"};
    }

    return {};
}

int main() {
    std::cout << std::boolalpha << (rps("rock", "paper") == "Player 2 wins") << std::endl;
    std::cout << std::boolalpha << (rps("paper", "rock") == "Player 1 wins") << std::endl;
}