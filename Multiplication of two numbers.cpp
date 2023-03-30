#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a,b,result=0,sign=1;
    cin>>a>>b;
    
    if((a<0 && b>0) || (a>0 && b<0))
    sign=-1;
    a=abs(a),b=abs(b);
    
    while(b!=0)
    {
        if(b&1)
        result+=a;
        
        a<<=1;
        b>>=1;
    }
    cout<<"Multiplication of two numbers = "<<sign*result;
}
