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
    void helper(TreeNode* root, int val, int depth,int currd){
        if(root==NULL) return;
        if(depth==currd+1){
             TreeNode* LTemp = new TreeNode(val);
                TreeNode* RTemp = new TreeNode(val);
                LTemp->left=root->left;
                RTemp->right =root->right;
                root->left=LTemp;
                root->right=RTemp;
               
        }
        
        helper(root->left,val,depth,currd+1);
        helper(root->right,val,depth,currd+1);
        
        return;
    }
        TreeNode* addOneRow(TreeNode* root, int val, int depth) {
            if (depth == 1) {
                TreeNode* newRoot = new TreeNode(val);
                newRoot->left = root;
                return newRoot;
            }
            helper(root,val,depth,1);
            return root;
        }
    };