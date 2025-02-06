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
    string helper(TreeNode* root, string result){
        if(root==NULL){  
            return "";
        }
        result =to_string(root->val);
        string left = helper(root->left,result);
        string right = helper(root->right,result);

        if(root->left==NULL && root->right==NULL){
            return result;
        }
        if(root->left==NULL){
            return result + "()"+ "("+right+")";
        }
        if(root->right==NULL){
            return result+"("+left+")";
        }

        return result+"("+left+")"+"("+right+")";

    }
    string tree2str(TreeNode* root) {
        return helper(root,"");   
    }
};