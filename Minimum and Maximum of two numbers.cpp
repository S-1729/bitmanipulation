#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	
	int minimum=y^(x^y)&-(x<y);
	int maximum=x^(x^y)&-(x<y);
	
	cout<<"Minimum of two numbers = "<<minimum<<endl;
	cout<<"Maximum of two numbers = "<<maximum;
}
