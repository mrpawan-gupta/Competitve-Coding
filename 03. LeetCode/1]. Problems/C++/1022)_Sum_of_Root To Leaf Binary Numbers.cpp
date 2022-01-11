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
class Solution{
public:
    int sumRootToLeaf(TreeNode *root){
        return helper(root, 0);
    }

private:
    int helper(TreeNode *root, int partial){
        if (!root)
            return 0;
        if (!root->left && !root->right){
            return (partial << 1) | root->val;
        }
        partial = (partial << 1) | root->val;
        return helper(root->left, partial) + helper(root->right, partial);
    }
};