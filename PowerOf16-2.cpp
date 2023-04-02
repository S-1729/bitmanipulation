#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n&&!(n&(n-1))&& !(n& 0xEEEEEEEE))
    cout<<"power of 16";
    else
    cout<<"Not a Power of 16";
}
