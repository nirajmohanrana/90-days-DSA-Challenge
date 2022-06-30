#include <bits/stdc++.h>
#define n 5
using namespace std;

int subset(int a[n], int i, int j, int sum){
    if(i>j)
        return 1;

    if(sum == a[i]+a[j]){    
        cout<<a[i]<<" "<<a[j];
        return 1;
    }

    if(sum != a[i]+a[j]){
        return subset(a, i+1, j, sum);
    }
    else{
        return subset(a, i, j-1, sum);
    }

}

int main() {
    int arr[n] = {1,2,3,4,5};
    int sum = 8;

    int i = 0,j = n-1;

    subset(arr,i,j,sum);
}