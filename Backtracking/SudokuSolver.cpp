#include<iostream>
using namespace std;

void printSudoku(int sudoku[9][9]){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int sudoku[9][9],int r,int c,int digit){
    //vertical
    for(int i=0; i<9; i++){
        if(sudoku[i][c] == digit){
            return false;
        }
    }

    //horizontal
    for(int i=0; i<9; i++){
        if(sudoku[r][i] == digit){
            return false;
        }
    }

    //grid
    int girdrow = (r/3)*3;
    int gridcol = (c/3)*3;

    for(int i=girdrow; i<=girdrow + 2; i++){
        for(int j=gridcol; j<=gridcol + 2; j++){
            if(sudoku[i][j] == digit){
                return false;
            }
        }
    }

    return true;
}

bool sudokuSolver(int sudoku[9][9], int r, int c){

    if(r == 9){
        //sudoku solve
        printSudoku(sudoku);
        return true;
    }
    int nextRow = r;
    int nextCol = c + 1;
    
    if(c + 1 > 8){
        nextRow = r + 1;
        nextCol = 0;
    }

    if(sudoku[r][c] != 0){
        return sudokuSolver(sudoku, nextRow, nextCol);
    }

    for(int digit=1; digit<=9; digit++){
        if(isSafe(sudoku, r, c, digit)){
            sudoku[r][c] = digit;
            if(sudokuSolver(sudoku, nextRow, nextCol)){
                return true;
            }
            sudoku[r][c] = 0;
        }
    }

    return false;
}

int main(){
    int sudoku[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                        {4, 9, 0, 1, 5, 7, 0, 0, 2},
                        {0, 0, 3, 0, 0, 4, 1, 9, 0},
                        {1, 8, 5, 0, 6, 0, 0, 2, 0},
                        {0, 0, 0, 0, 2, 0, 0, 6, 0},
                        {9, 6, 0, 4, 0, 5, 3, 0, 0},
                        {0, 3, 0, 0, 7, 2, 0, 0, 4},
                        {0, 4, 9, 0, 3, 0, 0, 5, 7},
                        {8, 2, 7, 0, 0, 9, 0, 1, 3}};

    cout<<sudokuSolver(sudoku, 0, 0);
}