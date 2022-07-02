#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "=================================================" << endl;
    cout << "Array Pointers";
    // Array Pointers
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    // the variable "arr" store the address of 1st array block
    cout << "Addres of arr[0] (arr) " << arr << endl;
    cout << "Addres of arr[0] (&arr[0]) " << &arr[0] << endl;
    cout << *arr + 1 << endl;   // adding 1 to value of *arr i.e. 2+1
    cout << *(arr) + 1 << endl; // adding 1 to value of *arr i.e. 2+1
    cout << *(arr + 1) << endl; // printing value of (arr+1) location

    cout << "*arr and arr[0] is same:- " << *arr << " " << arr[0] << endl;
    cout << endl;

    cout << "arr[i] = *(arr+i) \nlets take i = 2" << endl;
    cout << "arr[2]:- " << arr[2] << "\n*(arr+2):- " << *(arr + 2) << endl;
    cout << endl;

    cout << "***ALSO i[arr] IS EQAUL TO arr[i]*** \nlets take i = 2" << endl;
    cout << "2[arr]:- " << 2 [arr] << "\narr[2]" << arr[2] << endl;
    cout << endl;

    // DIFFERENCE BETWEEN ARRAYS & POINTERS
    cout << "DIFFERENCE BETWEEN ARRAYS & POINTERS" << endl;
    // Addresses
    cout << "Addresses:-" << endl;
    int *p = &arr[0];
    cout << "Address of arr[0]:- " << &arr[0] << endl;
    cout << "Address of p:- " << &p << endl;

    // SYMBOL TABLE CONTENTS CANNOT BE CHANGED
    cout << "SYMBOL TABLE CONTENTS CANNOT BE CHANGED" << endl;
    cout << "we can't change the contes of arr once declared \ncan't do this --> ''arr = arr + 1''" << endl;
    cout << endl;
    cout << endl;

    // we can do this via help of pointers
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    cout << "=================================================" << endl;
}