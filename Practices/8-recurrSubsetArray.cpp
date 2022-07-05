#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void subsetArray(int *arr, int *temp, int i, int n, int j)
{
    if (i == n)
    {
        int idx = 0;
        while (idx < j)
        {
            cout << temp[idx] << " ";
            ++idx;
        }
        cout << endl;
        return;
    }

    subsetArray(arr, temp, i + 1, n, j);
    temp[j] = arr[i];
    subsetArray(arr, temp, i + 1, n, j + 1);
}

int main()
{
    int n;
    cin >> n;
    int temp[100];
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // printArray(arr, n);

    subsetArray(arr, temp, 0, n, 0);
    return 0;
}