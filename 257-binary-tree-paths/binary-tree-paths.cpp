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
    vector<string> ans;
    void helper(TreeNode* root,string temp){
        if(root==NULL) return;
        temp =temp+to_string(root->val)+"->";
        if(!root->left && !root->right){
            ans.push_back(temp);
        }
        helper(root->left,temp);
        helper(root->right,temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string temp="";
        helper(root,temp);
        for(int i=0;i<ans.size();i++){
            ans[i].pop_back();
            ans[i].pop_back();
        }
        return ans;
    }
};