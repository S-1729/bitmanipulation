#include<iostream>
using namespace std;

int main()
{
	int n,nums[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>nums[i];
	
	int Xor=0,x=0,y=0;
    for (int i = 0; i <n; i++) {
      Xor ^= nums[i];
      Xor ^= (i + 1);
    }

    int rsbm=Xor&(-Xor);
    for(int i=0;i<n;i++)
    {
        if(nums[i]&rsbm)
        x^=nums[i];
        else
        y^=nums[i];

        if(rsbm&(i+1))
        x^=(i+1);
        else
        y^=(i+1);
    }
    
    for(int i=0;i<n;i++)
    {
        if (nums[i] == y) {
          x = x ^ y ^ (y = x);
          break;
        }
    }
    cout<<"Repeating number = "<<x<<endl;
    cout<<"Missing number = "<<y;
}
