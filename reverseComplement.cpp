#include <algorithm>
#include <iostream>
#include <map>
#include <string>

std::string reverse_complement(std::string& input_sequence) {
    std::map<char, char> COMP_SET = {{'A', 'U'}, {'U', 'A'}, {'G', 'C'}, {'C', 'G'}};

    for (auto& seq : input_sequence) {
        seq = COMP_SET[seq];
    }

    std::reverse(input_sequence.begin(), input_sequence.end());

    return input_sequence;
}

int main() {
    std::string t1{"CAGGU"};
    std::string r1{"ACCUG"};
    std::cout << std::boolalpha << (reverse_complement(t1) == r1) << std::endl;
}