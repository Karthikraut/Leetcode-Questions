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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val==key) return helper(root);
        TreeNode* dummy =root;
        while(root!=NULL){
            if(root->val>key){
                if(root->left && root->left->val==key){
                    root->left = helper(root->left);
                }
                else root=root->left;
            }
            else{
                if(root->right && root->right->val==key){
                    root->right = helper(root->right);
                }
                else root =root->right;
            }
        }
        return dummy;
    }
    TreeNode* helper(TreeNode* root){
        if(!root->left && !root->right) return NULL;
        if(root->left==NULL) return root->right;
        if(root->right==NULL) return root->left;
        TreeNode* rightSide = rightMostOfRoot(root->left);
        rightSide->right = root->right;
        return root->left;
    }
    TreeNode* rightMostOfRoot(TreeNode* root){
        if(root->right==NULL) return root;
        return rightMostOfRoot(root->right);
    }
};