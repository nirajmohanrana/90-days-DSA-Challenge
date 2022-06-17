#include <iostream>
using namespace std;

int tworaisetom(int);

int main() {
    int m, result;

    cout<<"Enter the value of m: ";
    cin>>m;

    result = tworaisetom(m);
    cout << "2 raise to " << m << " = " << result;
    return 0;
}

int tworaisetom(int m) {
    if (m >= 1) {
        return 2 * tworaisetom(m-1); //2 * 2^(m-1)
    } else {
        return 1;
    }
}