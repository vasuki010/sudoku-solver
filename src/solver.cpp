#include "solver.hpp"
#include "iostream"
#include "vector"
#include "validate.hpp"


bool solveBoard(vector<vector<int>> &board){
    int row = 0;
    
    while(row < 9){
        for(int i = 0; i < 9; i++){
            if(board[row][i] == 0){
                for(int no = 1; no <= 9; no++){
                    if(issafe(board, row, i, no)){
                        board[row][i] = no;

                        if(solveBoard(board)) return true;
                        board[row][i] = 0;
                    }
                }
                return false;
            }
        }
        row ++;
    }
    return true;
}


// g++ main.cpp generate.cpp validate.cpp solver.cpp utils.cpp -I../include -o ../bin/sudoku.exe  in src folder

// .\sudoku. exe  in bin folder


