#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    bitset<32>b(n);
    int c= b.count();
    cout<<"Count of set bits = "<<c;
}