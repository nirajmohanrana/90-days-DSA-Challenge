#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void findCombinations(vector<char> keypad[], int input[], string result, int i, int n)
{
    string res2 = "";
    ofstream myfile;
    myfile.open("11-outputFor11.txt", std::ios_base::app);
    myfile << res2 + result << "\n";

    if (i == n)
    {

        cout << result << endl;
        myfile.close();
        return;
    }

    int digit = input[i];
    int len = keypad[digit].size();

    for (int j = 0; j < len; j++)
    {
        findCombinations(keypad, input, result + keypad[digit][j], i + 1, n);
    }
}

int main()
{
    vector<char> keypad[] =
        {
            {},
            {},
            {'a', 'b', 'c'},
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'}};

    int n;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
        cin >> input[i];

    findCombinations(keypad, input, "", 0, n);
    return 0;
}