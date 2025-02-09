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
    bool isOneExist(TreeNode* root){
        if(root==NULL) return false;
        if(root->val==1) return true;
        return isOneExist(root->left) || isOneExist(root->right);
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL) return NULL;
        if(!isOneExist(root)) return NULL;
        if(!isOneExist(root->left)){
            root->left =NULL;
        }
        if(!isOneExist(root->right)){
            root->right=NULL;
        }
        pruneTree(root->left);
        pruneTree(root->right);
        return root;
    }
};