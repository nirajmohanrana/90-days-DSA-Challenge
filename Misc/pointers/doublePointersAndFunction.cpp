#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;  //NOTHING CHANGES WHEN WE USE THIS

    //*p2 = *p2 + 1; // CHANGES THE VALUE STORED IN "p" in main functn

    //**p2 = **p2 + 1; // CHANGES THE VALUE OF of int "value" in main functn
}

int main()
{
    cout << "=============================================" << endl
         << endl;
    // STARTS HERE

    int value = 5;
    int *p = &value;
    int **p2 = &p;

    cout << "value before --> " << value << endl;
    cout << "p before --> " << p << endl;
    cout << "p2 before --> " << p2 << endl;

    update(p2);

    cout << endl;
    cout << "value after --> " << value << endl;
    cout << "p after --> " << p << endl;
    cout << "p2 after --> " << p2 << endl;

    // ENDS HERE
    cout << endl
         << "=============================================" << endl;
}