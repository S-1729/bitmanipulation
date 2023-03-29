#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    int sum=(a^b)+2*(a&b);
    cout<<"Addition of two numbers = "<<sum;
}
