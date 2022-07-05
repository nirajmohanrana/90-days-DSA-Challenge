#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int n, result;

    cout << "Enter the value of n: ";
    cin >> n;

    result = fibonacci(n);
    cout << "Fibonacci of" << n << " = " << result;
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int rC1 = fibonacci(n - 1);
    int rC2 = fibonacci(n - 2);

    int sC = rC1 + rC2;
    return sC;
}