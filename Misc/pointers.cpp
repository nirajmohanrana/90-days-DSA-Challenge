#include <bits/stdc++.h>
using namespace std;

int main() {
    int age = 20;

    int *ptr = &age;
    cout<<ptr<<" "<<*ptr<<" "<<age<<" "<<&age;
}