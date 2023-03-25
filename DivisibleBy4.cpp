#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int x=n;
	n=n>>2;
	n=n<<2;
	
	if(x==n)
	cout<<"Divisible by 4";
	else
	cout<<"Not divisible by 4";
}
