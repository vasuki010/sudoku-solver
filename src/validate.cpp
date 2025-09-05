#include "iostream"
#include "validate.hpp"
#include "vector"

using namespace std;

bool issafe(vector<vector<int>> &board, int row, int col, int num){
    for(int i = 0; i < 9; i++){
        if(board[row][i] == num && col != i){
            return false;
        }
    }
    for(int i = 0; i < 9; i++){
        if(board[i][col] == num && row != i){
            return false;
        }
    }
    int a = (row / 3) * 3;
    int b = (col / 3) * 3;

    for(int i = a; i < a + 3; i++){
        for(int j = b; j < b + 3; j++){
            if(board[i][j] == num && (i != row || j != col)){
                return false;
            }
        }
    }
    return true;
}

void validBoard(vector<vector<int>> &board){
    int row = 0;
    while(row < 9){
        for(int i = 0; i < 9; i++){
            if(board[row][i] != 0){
                int nos = board[row][i];

                if(!issafe(board, row, i, nos)){

                    board[row][i] = 0;
                    issafe(board, row, i, nos);
                }
            }
        }
        row++;
    }
}