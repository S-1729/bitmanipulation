#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    if(n && !(n&(n-1)))
    cout<<"Power of Two";
    else
    cout<<"Not a Power of Two";
}