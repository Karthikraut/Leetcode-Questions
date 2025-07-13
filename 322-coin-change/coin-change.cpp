class Solution {
public:
    vector<vector<int> > dp;
    int helper(vector<int>& coins, int amount,int i){
        if(amount==0) return 0;
        if(i>= coins.size() || amount<0) return 1e4+2;
        if(dp[i][amount]!=-1) return dp[i][amount];
        return dp[i][amount] = min(1+helper(coins,amount-coins[i],i),helper(coins,amount,i+1));
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(coins.size()+2,vector<int>(amount+4,-1) );
        int ans = helper(coins,amount,0);
        if(amount==0) return 0;
        return ans==10002? -1:ans;
    }
};