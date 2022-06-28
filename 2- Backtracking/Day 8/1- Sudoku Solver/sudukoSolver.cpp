#include<iostream>
#define N 9
using namespace std;

void printSudoku(int grid[N][N]){
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++)
            cout << grid[row][col] << " ";
        cout << endl;
    }
    return;
}

bool check(int grid[N][N], int row, int col, int num){
    // ROW
    for (int i = 0; i<=N-1; i++)
        if(grid[i][col] == num)
            return false;

    // COLUMN
    for (int j = 0; j<=N-1; j++)
        if(grid[row][j] == num)
            return false;

    // 3x3 Box
    int inI = row-row%3;
    int inJ = col-col%3;

    for(int i=0; i<3; i++)
        for (int j=0; j<3; j++){
            if(grid[i+inI][j+inJ] == num)
                return false;
        }
    
    return true;
}


bool solveSudoku(int grid[N][N], int row, int col){
    if(row == N-1 && col == N) //BASECASE
        return true;
    
    if (col == N){
        row++;
        col = 0;
    }

    if (grid[row][col] != 0)
        solveSudoku(grid,row,col+1);

    for(int i = 1; i<=N; i++) {
        if(check(grid,row,col,i)) {//RECURSIVE CALL
            grid[row][col] = i;
            if(solveSudoku(grid,row,col+1)) //RECURSIVE CALL
                return true;
        }
    }
    
    grid[row][col] = 0; //BACTRACK

    return false;
}

int main() {
     int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    
    if(solveSudoku(grid,0,0))
        printSudoku(grid);
    else 
        cout<<"No possible Solution";

    return 0;
}