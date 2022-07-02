#include <iostream>
using namespace std;

int main()
{
     cout << "=============================================" << endl
          << endl;
     // STARTS HERE

     int value = 5;

     int *p = &value; // pointer
     int **p2 = &p;   // DOUBLE POINTER
     cout << "printing *p2--> " << *p2 << " --> that is address of p (&p)" << endl
          << endl;

     // PRINTING VALUES i.e 5
     cout << "---Printing Values---" << endl;
     cout << "value--> " << value << endl
          << "*p--> " << *p << endl
          << "**p2--> " << **p2 << endl // double dereference to value
          << endl;

     // PRINTING ADDRESS IN WHICH 5 IS STORED
     cout << "---Printing Addresses---" << endl;
     cout << "&value--> " << &value << endl
          << "p--> " << p << endl
          << "*p2--> " << *p2 << endl
          << endl;

     // ENDS HERE
     cout << endl
          << "=============================================" << endl;

     return 0;
}