class Solution {
  public:
    string binaryNextNumber(string s) {
        int n=s.size();
        int i=0;
        while(i<n && s[i]!='1')
            i++;
        s=s.substr(i);
        n=s.size();
        i=n-1;
        while(i>=0 && s[i]!='0'){
            s[i]='0';
            i--;
        }
        if(i!=-1){
            s[i]='1';
            return s;
        }
        return '1'+s;
        
    }
};

/*
    Given a binary representation in the form of a string(s) of a number n, the task is to find a binary representation of n+1.
    
    Example 1:
    Input: s = "10"
    Output: 11
    Explanation: "10" is the binary representation of 2 and binary representation of 3 is "11"
    
    Example 2:
    Input: s = "111"
    Output: 1000
    Explanation: "111" is the binary representation of 7 and binary representation of 8 is "1000"

    T.C : O(n)
*/
