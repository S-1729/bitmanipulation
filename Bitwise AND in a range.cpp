#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,i=0;
	cin>>m>>n;
	while(m!=n)
	{
		m>>=1;
		n>>=1;
		i++;
	}
	cout<<(m<<i);
}
