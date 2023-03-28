#include<bits/stdc++.h>
using namespace std;

int CountSetBitsInRange(int n)
{
	if(n<=1)
	return n;
	
	int x=log2(n);
	return pow(2,x-1)*x+n-pow(2,x)+1+CountSetBitsInRange(n-pow(2,x));
	
}
int main()
{
	int n;
	cin>>n;
	
	int c=CountSetBitsInRange(n);
	cout<<"No of set bits in a range from 1 to n = "<<c;
	
}
