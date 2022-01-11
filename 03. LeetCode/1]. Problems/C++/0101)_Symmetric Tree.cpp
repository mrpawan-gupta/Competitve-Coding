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
    void swapRootLeft(TreeNode *root)
    {
        if (!root)
            return;
        swap(root->left, root->right);
        swapRootLeft(root->left);
        swapRootLeft(root->right);
    }

    bool isSame(TreeNode *r, TreeNode *l)
    {
        if (!r && !l)
            return true;

        if (!r && l || !l && r)
            return false;

        return (r->val == l->val) && isSame(r->left, l->left) && isSame(r->right, l->right);
    }

    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;

        swapRootLeft(root->left);

        return isSame(root->left, root->right);
    }
};