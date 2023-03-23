#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    int c=__builtin_popcount(n);
    if(c==1)
    cout<<"Power of Two";
    else
    cout<<"Not a Power of Two";
}