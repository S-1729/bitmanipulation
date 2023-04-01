#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int ans=INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        int Xor=arr[i]^arr[i+1];
        ans=min(ans,Xor);
    }
    cout<<"Minimum XOR value = "<<ans;
}
