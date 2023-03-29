#include <bits/stdc++.h>
using namespace std;

int Addition(int a,int b)
{
	if(b==0)
	return a;
	return Addition(a^b,(a&b)<<1);
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<"Addition of two numbers = "<<Addition(a,b);
}
