#include <bits/stdc++.h>
#define N 5
using namespace std;

void printSoln(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << " " << board[i][j] << " ";
        printf("\n");
    }
}

bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
    // ROW
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    // COL
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // DIAGONAL
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQueensUntil(int board[N][N], int col)
{
    if (col == N) // BASECASE
        return true;

    for (int i = 0; i < N; i++)
    {
        if (isSafe(board, i, col))
        {
            board[i][col] = 1;

            if (solveNQueensUntil(board, col + 1)) // RECURSION
                return true;

            board[i][col] = 0; // BACKTRACK
        }
    }
    return false;
}

bool solveNQueens()
{
    int board[N][N] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}};

    if (solveNQueensUntil(board, 0) == false)
        return false;

    printSoln(board);
    return true;
}

int main()
{
    solveNQueens();
    return 0;
}