#include <iostream>
using namespace std;

void print(int *p)
{
    cout << "Address (p) --> " << p << endl;
    cout << "Value (*p) --> " << *p << endl;
}

// WE CANNOT ACCESS THE ORIGINAL VALUE (value) SO WE CAN PASS THROUGH REFERENCE THROUGH POINTERS
void update(int *p)
{
    (*p)++;
}

int getSum(int *a, int n)
{
    cout << "Size of:- " << sizeof(a) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + i[a];

    return sum;
}

int main()
{
    cout << "=================================================" << endl;
    int value = 5;
    int *p = &value;
    print(p);
    update(p);

    cout << value << endl;

    cout << "=================================================" << endl;

    int arr2[5] = {1, 2, 3, 4, 5};

    cout << "Sum is " << getSum(arr2 + 2, 3) << endl;
    cout << "=================================================" << endl;
    return 0;
}