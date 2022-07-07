#include <bits/stdc++.h>
using namespace std;

void permute(int arr[], int s, int e)
{
    if (s == e)
    {
        for (int x = 0; x <= s; x++)
            cout << arr[x];
        cout << endl;
        return;
    }
    else
    {
        for (int j = s; j <= e; j++)
        {
            swap(arr[s], arr[j]);
            permute(arr, s + 1, e);
            swap(arr[s], arr[j]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    permute(arr, 0, n - 1);
    return 0;
}