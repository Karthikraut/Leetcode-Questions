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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans =root->val;
        while(!q.empty()){
            int n =q.size();
            for(int i=0;i<n;i++){
                TreeNode* node  = q.front();
                q.pop();
                if(node->right) q.push(node->right);
                if(node->left) q.push(node->left);
                ans =node->val;
            }
        }
        return ans;
    }
};