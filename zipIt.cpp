#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<std::string>>
zipIt(std::vector<std::string> women, std::vector<std::string> men) {
    if (women.size() != men.size()) {
        return {{}};
    }

    std::vector<std::vector<std::string>> zipped;
    for (auto i = 0; i < women.size(); ++i) {
        std::vector<std::string> paired = {women[i], men[i]};
        zipped.emplace_back(paired);
    }

    return zipped;
}

int main() {
    std::vector<std::string> w1{"Ana", "Amy", "Lisa"};
    std::vector<std::string> m1{"Bob", "Josh", "Tim"};
    auto a1 = zipIt(w1, m1);
    for (const auto& couple : a1) {
        std::cout << couple[0] << ":" << couple[1] << std::endl;
    }
}