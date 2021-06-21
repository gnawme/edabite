#include <iostream>
#include <set>
#include <vector>

bool isSubset(std::vector<int> arr1, std::vector<int> arr2) {
    std::set<int> set1(arr1.begin(), arr1.end());
    std::set<int> set2(arr2.begin(), arr2.end());

    for (const auto& in1 : set1) {
        if (auto innit = set2.find(in1); innit == set2.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<int> t1a1{3, 2, 5};
    std::vector<int> t1a2{5, 3, 7, 9, 2};
    std::cout << std::boolalpha << isSubset(t1a1, t1a2) << std::endl;

    std::vector<int> t2a1{1, 2};
    std::vector<int> t2a2{3, 5, 9, 1};
    std::cout << std::boolalpha << isSubset(t2a1, t2a2) << std::endl;
}