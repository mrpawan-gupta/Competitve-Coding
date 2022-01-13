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
    long int x = LONG_MIN;
    bool infix(TreeNode *r)
    {
        if (!r)
            return true;
        bool y = infix(r->left);
        if (x >= r->val)
            return false;
        else
            x = r->val;
        return y && infix(r->right);
    }
    bool isValidBST(TreeNode *root)
    {
        return infix(root);
    }
};