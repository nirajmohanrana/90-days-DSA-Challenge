#include <bits/stdc++.h>
using namespace std;

int countWays(int n)
{
    if (n <= 2)
        return n;

    return countWays(n - 1) + countWays(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << countWays(n);
    return 0;
}