#include <iostream>
#define N 9
using namespace std;

void print(int arr[N][N]){
    cout<<endl;
    for (int i= 0; i < N; i++){
        for (int j= 0; j < N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool check(int grid[N][N], int row, int col, int num) {
    // Row
    for(int r = 0; r<N; r++){
        if (grid[r][col] == num)
            return false;
    }

    // Col
    for(int c = 0; c<N; c++){
        if (grid[row][c] == num)
            return false;
    }

    // 3x3 Matrix
    int inI = row - row%3, inJ= col - col%3;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (grid[i+inI][j+inJ] == num)
                return false;
        }
    }

    return true;
}

bool solveSudoku(int grid[N][N], int row, int col){
    if (row == N-1 && col == N) {
        return true;
    }

    if(col == N){
        row++;
        col = 0;
    }

    if(grid[row][col] > 0){
        return solveSudoku(grid, row, col+1);
    }

    for (int num = 1; num<=N; num++) {
        if (check(grid,row,col,num)) {
            grid[row][col] = num;
            if(solveSudoku(grid,row,col+1))
                return true;
        }

        grid[row][col] = 0;
    }

    return false;
}

int main() {
    int grid[N][N] = {  { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
					    { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
					    { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
					    { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
					    { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
					    { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
					    { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
					    { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
					    { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

    print(grid);

    if(solveSudoku(grid, 0, 0))
        print(grid);
    else
        cout << "No Possible Solution"<< endl;

    return 0;
}