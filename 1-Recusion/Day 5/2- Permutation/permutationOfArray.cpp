#include <bits/stdc++.h> 
using namespace std;

void permute(string str, int s, int i){
    if(s==i){
        cout<<str<<endl;
        return;
    }
    else{
        for (int j=s; j<=i; j++){
            swap(str[s], str[j]);
            permute(str,s+1,i);
            swap(str[s],str[j]);
        }
    }
}

int main() {
    string str = "123";
    string abc = "ABC";
    int n = str.size();

    permute(str,0,n-1);
    cout<<endl;
    permute(abc,0,n-1);
    return 0;
}