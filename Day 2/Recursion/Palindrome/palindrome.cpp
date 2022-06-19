#include <bits/stdc++.h>
using namespace std;

bool helper(char str[], int s, int e){
    
    if (s == e)
        return true;
    
    if (str[s] != str[e])
        return false;

    if (s < e+1)
        return helper(str, s+1, e-1);

    return true;
}

bool isPalindrome(char str[]){
    int n = strlen(str);

    if (n==0)
        return true;
    
    return helper(str, 0, n-1);
}

int main() {
    char str[] = "yeeah";
    cout<<str<<"\n";

    if(isPalindrome(str))
        cout<<"Yes, It's a Palindrome";
    else
        cout<<"No, It's not a Palindrome";
}