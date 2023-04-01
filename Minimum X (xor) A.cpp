#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    int k=log2(a),countOfb=__builtin_popcount(b),X=0;
    for(int i=k;i>=0 && countOfb ;i--)
    {
        if(a&(1<<i))
        {
            X=X|(1<<i);
                countOfb--;
        }
    }
        
    for(int i=0;i<32 && countOfb ;i++)
    {
        if((a&(1<<i))==0)
        {
            X=X|(1<<i);
            countOfb--;
        }
    }
    cout<<"Minimum X (xor) A is "<<X;
}
