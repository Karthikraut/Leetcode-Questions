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

//Using Stack Approach
class Solution {
public:
    void flatten(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* current=st.top();
            st.pop();
            if(current && current->right){
                st.push(current->right);
            }
            if(current && current->left){
                st.push(current->left);
            }
            if(!st.empty() )current->right =st.top();
            if(current) current->left=NULL;
        }
    }
};