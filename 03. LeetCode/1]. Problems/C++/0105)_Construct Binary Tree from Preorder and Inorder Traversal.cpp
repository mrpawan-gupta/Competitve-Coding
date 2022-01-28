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
    int preIndex = 0;
    unordered_map<int, int> mp;
    TreeNode *Ctree(vector<int> &pre, vector<int> &in, int si, int se)
    {

        if (si > se)
            return NULL;

        int inIndex = mp[pre[preIndex]];
        TreeNode *root = new TreeNode(pre[preIndex++]);

        if (si == se)
            return root;

        root->left = Ctree(pre, in, si, inIndex - 1);
        root->right = Ctree(pre, in, inIndex + 1, se);

        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {

        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        TreeNode *head = Ctree(preorder, inorder, 0, inorder.size() - 1);

        return head;
    }
};