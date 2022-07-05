#include <bits/stdc++.h>
using namespace std;

int twoRaiseToM(int m)
{
    if (m >= 1)
    {
        return 2 * twoRaiseToM(m - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int m;
    cin >> m;

    cout << twoRaiseToM(m);
    return 0;
}