#include <bits/stdc++.h>
using namespace std;

void findCombinations(vector<char> keypad[], int input[], string res, int index, int n)
{
    if (index == n)
    {
        cout << res << endl;
        return;
    }

    int digit = input[index];
    int len = keypad[digit].size();

    for (int i = 0; i < len; i++)
    {
        findCombinations(keypad, input, res + keypad[digit][i], index + 1, n);
    }
}

int main()
{

    // General Keypad
    vector<char> keypad[] =
        {
            {}, {}, // 0 and 1 digit don't have any characters associated
            {'a', 'b', 'c'},
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'}};

    int input[] = {7, 7, 4, 9, 2};

    int n = sizeof(input) / sizeof(input[0]);

    findCombinations(keypad, input, " ", 0, n);
    return 0;
}