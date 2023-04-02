#include<iostream>
using namespace std;

int main()
{
	int L,R;
	cin>>L>>R;
	
	int x=L^R;
    int ans=0,i=0;
    while(x!=0)
    {
    	ans+=(1<<i);
    	x>>=1;
    	i++;
	}
    cout<<"Maximum xor in a range L to R is = "<<ans;
}
