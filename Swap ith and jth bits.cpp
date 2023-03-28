#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,x,y;
    cin>>n>>i>>j;
    
    x=(n>>i)&1;
    y=(n>>j)&1;
    
    m=x^y;
    m=(m<<i)|(m<<j);
    n=n^m;
    
	cout<<"After swapping ith and jth bits "<<n;
}
