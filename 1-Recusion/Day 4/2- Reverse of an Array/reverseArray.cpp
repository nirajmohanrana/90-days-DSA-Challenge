#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int s, int e){
    if(s>=e)
        return;
    
    int t = arr[s];
    arr[s] = arr[e];
    arr[e] = t;

    reverseArray(arr,s+1,e-1);
}

    void printArray(int arr[],int n){
        for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);

    reverseArray(arr,0,n-1);

    printArray(arr,n);

    return 0;
}