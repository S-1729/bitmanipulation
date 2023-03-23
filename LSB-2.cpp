#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    int lsb= n & (-n);
    cout<<"Least Significant Bit = "<<lsb;
}