#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int k=log2(n)+1;
    int bit=(1<<k)-1;    //int bit=1<<(k-1);
    n=n^bit;            // int bit=bit|(bit-1);
    cout<<"After flipping bits n = "<<n;
}
