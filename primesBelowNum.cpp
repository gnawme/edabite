#include <iostream>
#include <vector>

std::vector<int> primesBelowNum(int n) {
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (auto i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (auto j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    std::vector<int> primes;
    for (auto i = 0; i < isPrime.size(); ++i) {
        if (isPrime[i] && (i <= n)) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    std::vector<int> t1{primesBelowNum(5)};
    for (const auto& prime : t1) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    std::vector<int> t2{primesBelowNum(10)};
    for (const auto& prime : t2) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;
}