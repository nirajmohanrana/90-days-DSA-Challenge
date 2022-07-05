/* Part of Cosmos by OpenGenus Foundation */
#include <iostream>
using namespace std;
/*
 *Find whether or not there exists any subset
 *  of array  that sum up to targetSum
 */
class Subset_Sum
{
public:
    // RECURSIVE METHOD
    bool subsetSum_Recursive(int arr[], int n, int sum)
    {
        if (sum == 0)
            return true;

        if (n < 0 || sum < 0)
            return false;

        bool include = subsetSum_Recursive(arr, n - 1, sum - arr[n]);
        bool exclude = subsetSum_Recursive(arr, n - 1, sum);
        return include || exclude;
    }
};

int main()
{
    int i, n, sum;
    Subset_Sum S;
    cout << "Enter t4he number of elements in the set" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the values" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the value of sum" << endl;
    cin >> sum;
    bool f = false;
    S.subsetSum_Recursive(a, n, sum);
    if (f)
        cout << "subset with the given sum found" << endl;
    else
        cout << "no required subset found" << endl;
    return 0;
}
