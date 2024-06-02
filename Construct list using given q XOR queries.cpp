class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        vector<int>arr={0};
        int sum=0;
        for(auto &q:queries){
            if(q[0]==0)
                arr.push_back(q[1]^sum);
            else
                sum^=q[1];
        }
        for(int i=0;i<arr.size();i++)
            arr[i]^=sum;
        sort(begin(arr),end(arr));
        return arr;
    }
};

/*
    Given a list s that initially contains only a single value 0. There will be q queries of the following types:
      .0 x: Insert x in the list
      .1 x: For every element a in s, replace it with a ^ x. ('^' denotes the bitwise XOR operator)
    Return the sorted list after performing the given q queries.
    
    Example 1:
    Input:
    q = 5
    queries[] = {{0, 6}, {0, 3}, {0, 2}, {1, 4}, {1, 5}}
    Output:
    1 2 3 7
    Explanation:
    [0] (initial value)
    [0 6] (add 6 to list)
    [0 6 3] (add 3 to list)
    [0 6 3 2] (add 2 to list)
    [4 2 7 6] (XOR each element by 4)
    [1 7 2 3] (XOR each element by 5)
    The sorted list after performing all the queries is [1 2 3 7]. 
    
    Example 2:
    Input:
    q = 3
    queries[] = {{0, 2}, {1, 3}, {0, 5}} 
    Output :
    1 3 5
    Explanation:
    [0] (initial value)
    [0 2] (add 2 to list)
    [3 1] (XOR each element by 3)
    [3 1 5] (add 5 to list)
    The sorted list after performing all the queries is [1 3 5].

    T.C : O(n)
*/
