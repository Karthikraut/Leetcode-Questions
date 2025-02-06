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
    unordered_map<string,int> mp;
    vector<TreeNode*> result;
    string helper(TreeNode* root,string s){
        if(root==NULL){
            return "N";
        }
        
        s = to_string(root->val)+','+helper(root->left,s)+','+helper(root->right,s);
        if(mp[s]==1){
            result.push_back(root);
        }
        mp[s]++;
        return s;
        
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        helper(root,"");
        
        return result;
    }
};