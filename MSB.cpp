#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    
    int value=(n+1)>>1;
    cout<<"Most Significant Bit = "<<value;
}