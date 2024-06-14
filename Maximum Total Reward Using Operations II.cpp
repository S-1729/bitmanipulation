class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues) {
        sort(begin(rewardValues),end(rewardValues));
        bitset<50000>dp,mask;
        int maskPos=0,maxm=rewardValues.back()-1;
        dp[0]=1;
        for(int i=0;i<rewardValues.size()-1;i++){
            int reward=rewardValues[i];
            while(maskPos<reward)
                mask[maskPos++]=1;
            dp|=(dp&mask)<<reward;
        }
        while(!dp[maxm])
            --maxm;
        return maxm+rewardValues.back();
    }
};

/*
    You are given an integer array rewardValues of length n, representing the values of rewards.
    Initially, your total reward x is 0, and all indices are unmarked. You are allowed to perform the following operation any number of times:
      .Choose an unmarked index i from the range [0, n - 1].
      .If rewardValues[i] is greater than your current total reward x, then add rewardValues[i] to x (i.e., x = x + rewardValues[i]), and mark the index i.
    Return an integer denoting the maximum total reward you can collect by performing the operations optimally.
    
    Example 1:
    Input: rewardValues = [1,1,3,3]
    Output: 4
    Explanation:
    During the operations, we can choose to mark the indices 0 and 2 in order, and the total reward will be 4, which is the maximum.
  
    Example 2:
    Input: rewardValues = [1,6,4,3,2]
    Output: 11
    Explanation:
    Mark the indices 0, 2, and 1 in order. The total reward will then be 11, which is the maximum.

    T.C : O(n)
    S.C : O(50000)
  */
