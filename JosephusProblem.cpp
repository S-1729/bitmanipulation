#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int k=log2(n);
	n=n^(1<<k);
	n=(n<<1)^1;
	cout<<"Safest Position is = "<<n;
}
