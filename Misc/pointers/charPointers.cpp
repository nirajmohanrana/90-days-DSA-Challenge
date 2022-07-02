#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "=================================================" << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl
         << endl;
    // **cout** for array and character works differently
    // cout of array prints address
    // cout of char prints the whole character string

    int *ptr = &arr[0];
    char *c = &ch[0];

    // As in this case of int pointer pointer returns address of value assigned
    cout << ptr << endl;
    // But for chararcter as **cout**  works differently here also it prints whole character string
    cout << c << endl;

    // cout will print until it gets "/0" (null char)
    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    cout << "=================================================" << endl;
}