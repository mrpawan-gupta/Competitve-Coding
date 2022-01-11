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
class Solution
{
public:
    void reverte(TreeNode *root)
    {
        if (root == NULL)
            return;
        if (root->left != NULL || root->right != NULL)
        {
            TreeNode *nd = root->left;
            root->left = root->right;
            root->right = nd;
        }
        reverte(root->left);
        reverte(root->right);
    }
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        reverte(root);
        return root;
    }
};