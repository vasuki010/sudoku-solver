#include "iostream"
using namespace std;
#include "vector"

void printBoard(const std::vector<std::vector<int>> &board) {
    std::cout << "-------------------------\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0) std::cout << "| ";
            std::cout << board[i][j] << " ";
        }
        std::cout << "|\n";
        if ((i + 1) % 3 == 0) std::cout << "-------------------------\n";
    }
}
