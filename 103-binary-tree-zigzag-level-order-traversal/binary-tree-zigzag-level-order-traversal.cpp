/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector< vector<int> > ans ;
        if(root == NULL) return ans;
        int l =0;
        while (!q.empty()) {
            int n = q.size();
            vector<int> temp;
            while (n--) {
                TreeNode* a = q.front();
                temp.push_back(a->val);
                q.pop();
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
            }
            if(l%2==1) reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            l++;
        }
        return ans;
    }
};