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
    std::vector<int> elements;

public:
    void inorder(TreeNode *root)
    {
        if (root)
        {
            inorder(root->left);
            elements.push_back(root->val);
            inorder(root->right);
        }
    }

    bool findTarget(TreeNode *root, int k)
    {
        elements.clear();
        inorder(root);
        int beg = 0, end = elements.size() - 1;
        while (beg < end)
        {
            if (elements[beg] + elements[end] == k)
                return true;
            if (elements[beg] + elements[end] > k)
                end--;
            else
                beg++;
        }
        return false;
    }
};