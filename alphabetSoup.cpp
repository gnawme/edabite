#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int partition2(std::vector<char>& a, int l, int r) {
    int x = a[l];
    int j = l;
    for (int i = l + 1; i <= r; i++) {
        if (a[i] <= x) {
            j++;
            std::swap(a[i], a[j]);
        }
    }
    std::swap(a[l], a[j]);
    return j;
}

void quicksort(std::vector<char>& a, int l, int r) {
    if (l >= r) {
        return;
    }

    int k = l + rand() % (r - l + 1);
    std::swap(a[l], a[k]);
    int m = partition2(a, l, r);

    quicksort(a, l, m - 1);
    quicksort(a, m + 1, r);
}

std::string alphabetSoup(std::string str) {
    std::vector<char> strvec(str.begin(), str.end());
    quicksort(strvec, 0, strvec.size() - 1);

    return {strvec.begin(), strvec.end()};
}

int main() {
    std::cout << std::boolalpha << (alphabetSoup("javascript") == "aacijprstv") << std::endl;
}