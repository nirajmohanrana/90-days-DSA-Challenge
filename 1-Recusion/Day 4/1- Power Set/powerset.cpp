#include <bits/stdc++.h>
using namespace std;

void powerset(string str, string tAns ="  ", int i = 0) {
    int n = str.length();

    if (i == n) {
        cout<<tAns<<" ";
        return;
    }

    powerset(str,tAns+str[i],i+1); //take
    powerset(str,tAns,i+1); //not take
}

int main() {
    string str = "abc";
    cout<<str<<"\n";

    powerset(str);
    return 0;
}