/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isExist(TreeNode* root,TreeNode* p){
        if(root==p) return true;
        if(root==NULL) return false;
        return isExist(root->left,p) || isExist(root->right,p);
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(isExist(root->left,p) && isExist(root->left,q) && (root==p || root==q) ) return root;
        if(isExist(root->left,p) && isExist(root->left,q)) return lowestCommonAncestor(root->left,p,q);
        if(isExist(root->right,p) && isExist(root->right,q) && (root==p || root==q) ) return root;
        if(isExist(root->right,p) && isExist(root->right,q)) return lowestCommonAncestor(root->right,p,q);
         return root;
        
    }
};