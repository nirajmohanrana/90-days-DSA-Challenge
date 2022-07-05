#include <bits/stdc++.h>
using namespace std;

void powerSet(string str, string temp, int i)
{
    int n = str.length();

    if (i == n)
    {
        cout << temp << " ";
        return;
    }

    powerSet(str, temp + str[i], i + 1);
    powerSet(str, temp, i + 1);
}

int main()
{
    string str;
    cin >> str;

    powerSet(str, " ", 0);
    return 0;
}