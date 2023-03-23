#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    int c=__builtin_popcount(n);
    if(c==1)
    {
        int p=log2(n)+1;
        if(p&1)
        cout<<"Power of Four";
        else
        cout<<"Not a Power of Four";
    }
    else
    cout<<"Not a Power of Four";
}