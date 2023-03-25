#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int x=n;
	n=n>>1;
	n=n<<1;
	
	if(x==n)
	cout<<"Divisible by 2";
	else
	cout<<"Not divisible by 2";
}
