#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float total = 0,avg;

    // USER LENGTH
    cout<<"Enter no. of elements: ";
    cin>>n;

    float arr[n];
    cout<<"Enter nos."<<endl;

    // USER ARRAY's VALUES 
    for(int i=0; i<n; i++)
        cin>>arr[i];

    // Total
    for(int i=0; i<n; i++)
        total += arr[i];

    avg = total/n;
    cout<<"average is:"<<avg;
}