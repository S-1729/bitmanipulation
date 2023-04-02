#include<iostream>
using namespace std;

int main()
{
	int L,R;
	cin>>L>>R;
	
	int x=L^R;
    int k=log2(x)+1;
    int ans=(1<<k)-1;
    cout<<"Maximum xor in a range L to R is = "<<ans;
}
