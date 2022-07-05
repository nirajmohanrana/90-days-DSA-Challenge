#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void reverseArray(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    reverseArray(arr, s + 1, e - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    printArray(arr, n);
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
}