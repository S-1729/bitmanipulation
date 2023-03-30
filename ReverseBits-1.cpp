#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned int result=0;
    cin>>n;
    
    for(int i=0;i<32;i++)
    {
        if(n&(1<<i))
        result|= 1<<(31-i);
    }
    cout<<"After Reversing bits n = "<<result;
}
