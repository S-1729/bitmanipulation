#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    int lsb=n & ~(n-1);
    cout<<"Least Significant Bit = "<<lsb;
}