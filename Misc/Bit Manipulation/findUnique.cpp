#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n)
{
    int xorsum = 0;

    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[19] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << findUnique(arr, 19);
    return 0;
}