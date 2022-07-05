#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n);

void subsetArray(int arr[], int tArr[], int i, int n)
{
    if (n == i)
    {
        cout << tArr[i];
        return;
    }
    tArr[i] = arr[i];
    subsetArray(arr, tArr, i + 1, n);
    subsetArray(arr, {}, i + 1, n);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    subsetArray(arr, {}, 0, n);

    return 0;
}