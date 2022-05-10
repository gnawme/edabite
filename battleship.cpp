#include <iostream>
#include <map>
#include <string>
#include <vector>

std::string fire(std::vector<std::vector<char>> matrix, std::string coordinates) {
    std::map<char, int> ROWMAP{{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}};
    std::map<char, int> COLMAP{{'1', 0}, {'2', 1}, {'3', 2}, {'4', 3}, {'5', 4}};
    auto mapdim = matrix.size() - 1;
    std::cout << "Dim: " << mapdim << std::endl;
    auto row = ROWMAP.find(coordinates[0]);
    auto col = COLMAP.find(coordinates[1]);

    auto rindex = row->second;
    auto cindex = col->second;

    std::cout << "Row: " << rindex << std::endl;
    std::cout << "Col: " << cindex << std::endl;

    auto rowvec = matrix[rindex];
    auto target = rowvec[cindex];

    switch (target) {
    case '*':
        return {"BOOM"};
    case '.':
        return {"splash"};
    default:
        return {"ERROR"};
    }

    return {};
}

int main() {
    std::vector<std::vector<char>> test1{
            {'.', '.', '.', '*', '*'},
            {'.', '*', '.', '.', '.'},
            {'.', '*', '.', '.', '.'},
            {'.', '*', '.', '.', '.'},
            {'.', '.', '*', '*', '.'}};

    std::cout << std::boolalpha << (fire(test1, "A1") == "splash") << std::endl;

    std::vector<std::vector<char>> test2{
            {'.', '.', '.', '.'},
            {'.', '*', '*', '.'},
            {'.', '.', '.', '.'},
            {'.', '.', '.', '.'},
    };

    std::cout << std::boolalpha << (fire(test2, "B3") == "BOOM") << std::endl;
}