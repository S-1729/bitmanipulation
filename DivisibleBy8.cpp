#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int x=n;
	n=n>>3;
	n=n<<3;
	
	if(x==n)
	cout<<"Divisible by 8";
	else
	cout<<"Not divisible by 8";
}
