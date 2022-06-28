#include <iostream>
using namespace std;

int main() {
    int P,N,Z, n;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    int a[n];
    cout << "Enter the values" << endl;
    for(int i=0;i<n;i++)
      cin>>a[i];

    for(int i=0;i<n;i++) {
        if(a[i]>0)
            P++;
        else if(a[i]<0)
            N++;
        else
            Z++;
    }

    cout<<"Number of Positive Integer are"<<P<<endl;
    cout<<"Number of negative Integer are"<<N<<endl;
    cout<<"Number of zero Integer are"<<Z<<endl;
}