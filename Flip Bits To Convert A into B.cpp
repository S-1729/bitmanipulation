#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c=0,n;
    cin>>a>>b;
    
    n=a^b;
    while(n>0)
	{
		n&=(n-1);
		c++;
	}
	cout<<"No of bits to be flipped to convert a into b : "<<c;
}
