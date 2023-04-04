#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans=0,arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=31;i>=0;i--)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]&(1<<i))
			c++;
		}
		if(c%3)
		ans+=(1<<i);
	}
	cout<<"Unique number = "<<ans;
}
