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
    int widthOfBinaryTree(TreeNode* root) {
       queue<pair<TreeNode*,unsigned long long>>q;
       q.push({root,0});
       int maxWidth =1;
       while(!q.empty()){
            int n =q.size();
            int leftMostIdx =q.front().second;
            int rightMostIdx =q.back().second;
            maxWidth = max(maxWidth,rightMostIdx-leftMostIdx+1);
            for(int i=0;i<n;i++){
                TreeNode* front =q.front().first;
                unsigned long long idx = q.front().second;
                if(front->left){
                    q.push({front->left,2*idx+1});
                }
                if(front->right){
                    q.push({front->right,2*idx+2});
                }
                q.pop();
            }
       } 
       return maxWidth;
    }
};