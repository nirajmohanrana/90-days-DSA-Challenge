#include <iostream>
using namespace std;

int countWays(int n);

int main(){
    int n, result;

    cout<<"Enter the value of n: ";
    cin>>n;

    result = countWays(n);
    cout << n << "ways to reach" << result;
    return 0;
}

int countWays(int n){
    if (n==1 || n==2)
        return n;
    
    int rC1= countWays(n-1);
    int rC2= countWays(n-2);

    int sC = rC1+rC2;
    return sC;
}