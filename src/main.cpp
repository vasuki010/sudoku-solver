#include "generate.hpp"
#include "solver.hpp"
#include "utils.hpp"
#include "validate.hpp"
#include "iostream"

int main() {
    std::vector<std::vector<int>> board(9, std::vector<int>(9, 0));

    std::cout << "Generate a random sudoku:\n";
    generateBoard(board);
    printBoard(board);

    std::cout << "\nValidating board...\n";
    validBoard(board);
    printBoard(board);

    std::cout << "\nSolving board...\n";
    solveBoard(board);
    printBoard(board);
    return 0;
}
