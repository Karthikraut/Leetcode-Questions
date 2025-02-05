/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, unordered_map<int,int>& mp){
        if(root==NULL) return;
        mp[root->val]++;
        dfs(root->left,mp);
        dfs(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
       unordered_map<int,int> mp;
       dfs(root,mp);
       int maxCount =INT_MIN;
       vector<int> ans;
       for(auto [ele,count]:mp){
            if(count>maxCount){
                maxCount=count;
            }
        }
        for(auto [ele,count]:mp){
            if(count==maxCount){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};