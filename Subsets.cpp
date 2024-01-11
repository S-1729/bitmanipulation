#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=4,arr[]={1,2,3,4};
	for(int i=0;i<(1<<n);i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
				cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
}
