#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    int arr[r][c];

    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    int row_start = 0, row_end=r-1,
        col_start = 0, col_end=c-1;

    while(row_start <= row_end && col_start <= col_end) {
        // row start
        for(int i = col_start; i<=col_end; i++) {
            cout<<arr[row_start][i]<<" ";
        }

        row_start++;

        // col end
        for(int i=row_start; i<=row_end; i++){
            cout<<arr[i][col_end]<<" ";
        }

        col_end--;

        // row end
        for(int i = col_end; i>=col_start; i--){
            cout<<arr[row_end][i]<<" ";
        }

        row_end--;

        // col start
        for(int i = row_end; i>=row_start; i--){
            cout<<arr[i][col_start]<<" ";
        }
        col_start++;
    }
}