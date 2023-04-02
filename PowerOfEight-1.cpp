#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n&&!(n&(n-1))&& !(n& 0xB6DB6DB6))
    cout<<"power of 8";
    else
    cout<<"Not a Power of 8";
}
