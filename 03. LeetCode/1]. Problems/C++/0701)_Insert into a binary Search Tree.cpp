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
    void solve(TreeNode *currNode, int val)
    {
        if (currNode->val > val and currNode->left != NULL)
            solve(currNode->left, val);
        else if (currNode->val < val and currNode->right != NULL)
            solve(currNode->right, val);
        else
        {
            TreeNode *newNode = new TreeNode(val);
            if (currNode->val > val)
                currNode->left = newNode;
            else
                currNode->right = newNode;
        }
    }
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root != NULL)
            solve(root, val);
        else
        {
            TreeNode *newNode = new TreeNode(val);
            root = newNode;
        }
        return root;
    }
};