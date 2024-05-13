class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==0){
                for(int j=0;j<m;j++)
                    grid[i][j]=1-grid[i][j];
            }
        }
        
        for(int i=1;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(grid[j][i]==0)
                    c++;
            }
            if(c>(n-c)){
                for(int j=0;j<n;j++)
                    grid[j][i]=1-grid[j][i];
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            int num=0;
            for(int j=0;j<m;j++)
                num=num*2+grid[i][j];
            ans+=num;
        }
        return ans;
        
    }
};

//Code-2
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=pow(2,m-1)*n;
        for(int i=1;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(grid[j][i]==grid[j][0])
                    c++;
            }
            c=max(c,(n-c));
            ans+=pow(2,m-i-1)*c;
        }
        return ans;
        
    }
};

/*
    You are given an m x n binary matrix grid.
    A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's).
    Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.
    Return the highest possible score after making any number of moves (including zero moves).

    Example 1:
    Input: grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
    Output: 39
    Explanation: 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39

    Example 2:
    Input: grid = [[0]]
    Output: 1

    T.C : O(n*m)
*/
