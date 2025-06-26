class Solution {
public:
    bool isPal(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    void helper(string s, int idx, vector<string> path,
                vector<vector<string>>& ans) {
        if (idx >= s.length()) {
            ans.push_back(path);
            return;
        }
        for (int i = idx; i < s.length(); i++) {
            if (isPal(s.substr(idx, i-idx+1))) {
                path.push_back(s.substr(idx, i - idx + 1));
                helper(s, i + 1, path, ans);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.length();
        vector<vector<string>> ans;
        vector<string> path;
        helper(s,0,path,ans);
        return ans;
    }
};