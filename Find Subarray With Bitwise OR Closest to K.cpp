class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int And=nums[0],i=0,ans=INT_MAX;
        vector<int>arr(32,0);
        
        for(int j=0;j<nums.size();j++){
            And=And&nums[j];
            for(int ind=0;ind<32;ind++){
                if(nums[j]&(1<<ind))
                    arr[ind]++;
            }
            ans=min(ans,abs(And-k));
            
            while(i<=j && And<k){
                int newAnd=0;
                for(int ind=0;ind<32;ind++){
                    if(nums[i]&(1<<ind))
                        arr[ind]--;
                    if(arr[ind]==(j-i))
                        newAnd+=(1<<ind);
                }
                i++;
                And=newAnd;
                ans=min(ans,abs(And-k));
            }
        }
        return ans;
    }
};

/*
    You are given an array nums and an integer k. You need to find a subarray of nums such that the absolute difference between k and the bitwise OR of the subarray elements is as small as possible. 
    In other words, select a subarray nums[l..r] such that |k - (nums[l] OR nums[l + 1] ... OR nums[r])| is minimum.
    Return the minimum possible value of the absolute difference.   
    A subarray is a contiguous non-empty sequence of elements within an array.
    
    Example 1:
    Input: nums = [1,2,4,5], k = 3
    Output: 0
    Explanation:
    The subarray nums[0..1] has OR value 3, which gives the minimum absolute difference |3 - 3| = 0.
    
    Example 2:
    Input: nums = [1,3,1,3], k = 2 
    Output: 1 
    Explanation: 
    The subarray nums[1..1] has OR value 3, which gives the minimum absolute difference |3 - 2| = 1.
    
    Example 3:  
    Input: nums = [1], k = 10 
    Output: 9 
    Explanation:
    There is a single subarray with OR value 1, which gives the minimum absolute difference |10 - 1| = 9.

    T.C : O(n*32)
    S.C : O(32)
*/
