#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans=0;;
	cin>>n;
	
	while(n>0)
	{
		n=n&(n<<1);
		ans++;
	}
	cout<<"Count of Longest Consecutive ones's = "<<ans;
}
