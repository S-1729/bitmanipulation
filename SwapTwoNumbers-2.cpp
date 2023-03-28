#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	x=x^y;
	y=x^y;
	x=x^y;
	
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}
