#include<bits/stdc++.h>
using namespace std;
int main()
{
	int L,R,result=0;
	cin>>L>>R;
	
	int msbL=log2(L),msbR=log2(R);
	while(msbL==msbR)
	{
		result+=(1<<msbL);
		L-=(1<<msbL);
		R-=(1<<msbR);
		msbL=log2(L),msbR=log2(R);
	}
	
	int msb=max(msbL,msbR);
	for(int i=msb;i>=0;i--)
		result+=(1<<i);
	cout<<result;
}
