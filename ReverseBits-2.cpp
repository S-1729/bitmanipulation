#include <iostream>
using namespace std;

int main() {
    int n,result=0;
    cin>>n;
    
    while(n>0)
    {
        result<<=1;
        if(n&1)
        result++;
        
        n>>=1;
    }
    cout<<"After Reversing bits n = "<<result;
}
