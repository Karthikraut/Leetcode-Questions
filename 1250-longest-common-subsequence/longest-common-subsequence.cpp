class Solution {
public:
    vector<vector<int>> dp;
    int helper(string& t1, string& t2, int idx1, int idx2) {
        if (idx1 >= t1.length() || idx2 >= t2.length()) {
            return 0;
        }
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
        if (t1[idx1] == t2[idx2]) {
            return 1 + helper(t1, t2, idx1 + 1, idx2 + 1);
        }
        // Not Take
        return dp[idx1][idx2] = max(helper(t1, t2, idx1 + 1, idx2),
                                    helper(t1, t2, idx1, idx2 + 1));
    }
    int longestCommonSubsequence(string t1, string t2) {
        dp.resize(t1.length(), vector<int>(t2.length(), -1));
        return helper(t1, t2, 0, 0);
    }
};