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
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        if(!root->left && !root->right) return 1;
        int left=0,right=0;
        if(root->left){
            left = 1 + depth(root->left);
        }
        if(root->right){
            right = 1 + depth(root->right);
        }
        return max(left,right);
    }
    //  int depth(TreeNode* root){
    //     if(root==NULL) return 0;
       
    //     return 1+max(depth(root->left),depth(root->right));
    // }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int left = depth(root->left);
        int right = depth(root->right);
        if(abs(right-left)>= 2) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};