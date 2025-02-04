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
    void helper(TreeNode* root, int& ans, string temp){
        if(!root) return;
        temp =temp+ to_string(root->val);
        if(!root->left && !root->right){
            ans=ans+stoi(temp);
        }
        helper(root->left,ans,temp);
        helper(root->right,ans,temp);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        helper(root,ans,"");
        return ans;
    }
};