#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str, int s, int e)
{
    if (str[s] == str[e])
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return palindrome(str, s + 1, e - 1);

    return true;
}

int main()
{
    string str;
    cin >> str;
    int n = str.length();

    if (palindrome(str, 0, n - 1))
        cout << "Its a Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}