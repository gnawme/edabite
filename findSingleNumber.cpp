#include <iostream>
#include <set>
#include <vector>

int findSingleNumber(std::vector<int> numbers) {
    if (numbers.size() == 1) {
        return numbers[0];
    }

    std::multiset<int> monique(numbers.begin(), numbers.end());

    for (const auto& moo : monique) {
        if (monique.count(moo) == 1) {
            return moo;
        }
    }

    return -1;
}

int main() {
    std::vector<int> test1{7, 13, 3,  6, 5, 4, 4, 13, 5, 3, 6, 7, 6, 5, 3, 13,
                           4, 7,  13, 5, 7, 4, 3, 6,  8, 4, 3, 7, 5, 6, 13};
    std::cout << std::boolalpha << (findSingleNumber(test1) == 8) << std::endl;
}