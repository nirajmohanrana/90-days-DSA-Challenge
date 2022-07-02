#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "=================================================" << endl;
    int age = 20;

    int *ptr = &age; // creating a pointer
    cout << *ptr << " " << age << endl;

    (*ptr)++; // Pointer arithmetic
    cout << *ptr << " " << age << endl;
    cout << endl;

    cout << "=================================================" << endl;
}