#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n&&!(n&(n-1))&& !(n& 0xAAAAAAAA))
    cout<<"power of 4";
    else
    cout<<"Not a Power of 4";
}
