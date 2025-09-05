#include "generate.hpp"
#include "time.h"
#include "vector"
#include "cstdlib"

using namespace std;


void generateBoard(vector<vector<int>> &board){
    srand(time(0));
    int noite = (rand() % 10) + 40;
    for(int i = 0; i < noite; i++){
        int row = rand() % 9;
        int col = rand() % 9;
        int val = (rand() % 9) + 1;
        board[row][col] = val;
    }
}


