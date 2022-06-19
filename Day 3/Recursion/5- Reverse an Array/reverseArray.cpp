#include <bits/stdc++.h>
using namespace std;

void reverseArray(string& str){
    int n = str.length();
    cout<<n<<"\n";

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main() {
    string str = "nam-redips";
    cout<<str<<"\n";

    reverseArray(str);
    cout<<str;
    return 0;
}