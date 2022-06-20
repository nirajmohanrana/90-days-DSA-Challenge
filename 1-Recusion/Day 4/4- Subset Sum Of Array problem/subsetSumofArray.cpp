#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int sum, int tSum,int i, int n){

    if(sum == tSum)
        return true;
    
    if(i>=n)
        return false;

    int rC1 = subsetSum(arr,sum,tSum+arr[i],i+1,n);
    int rC2 = subsetSum(arr,sum,tSum,i+1,n);

    return rC1 || rC2;
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}

int main(){
    int arr[] = {3,34,4,12,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);
    return subsetSum(arr,9,0,0,n);
}