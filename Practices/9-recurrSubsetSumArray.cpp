#include <bits/stdc++.h>
using namespace std;

bool sumSubset(int arr[], int n, int sum)
{
    if (n == 0)
        return false;

    if (sum == 0)
        return true;

    if (arr[n - 1] > sum)
        sumSubset(arr, n - 1, sum);

    bool include = sumSubset(arr, n - 1, sum);
    bool exclude = sumSubset(arr, n - 1, sum - arr[n - 1]);

    return include || exclude;
}

int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (sumSubset(arr, n, sum))
        cout << "Subset found";
    else
        cout << "Not Found";
    return 0;
}