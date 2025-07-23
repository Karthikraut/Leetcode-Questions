class Solution {
public:
    vector<vector<int>> dp;
    int helper(vector<vector<int>>& grid,int i, int j){
        if(i>= grid.size() || j>=grid[0].size()) return 1e9;
        if(i==grid.size()-1 && j==grid[0].size()-1){
            return grid[i][j];
        }
        if(dp[i][j] !=-1) return dp[i][j];
        //Eithe we can go right
        int right = grid[i][j] + helper(grid,i,j+1);
        int down = grid[i][j] + helper(grid,i+1,j);
        
        return dp[i][j] = min(right,down);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n =grid.size(), m=grid[0].size();
        dp.resize(n,vector<int>(m,-1));
        return helper(grid,0,0);
    }
};