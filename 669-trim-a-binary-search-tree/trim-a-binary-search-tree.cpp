class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (root == NULL) return NULL;  // Base case

        // If the current node's value is out of the valid range
        if (root->val < low) {
            return trimBST(root->right, low, high);  // Only the right subtree can be valid
        }
        if (root->val > high) {
            return trimBST(root->left, low, high);  // Only the left subtree can be valid
        }

        // Recursively trim both left and right subtrees
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);

        return root;  // Return the trimmed subtree
    }
};
