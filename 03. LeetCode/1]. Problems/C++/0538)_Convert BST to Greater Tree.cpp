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
    int dfs(TreeNode *root, int aboveSum){
        if (!root)
            return 0;
        int right = dfs(root->right, aboveSum);
        int left = dfs(root->left, right + root->val + aboveSum);

        int sumBelow = root->val + left + right;
        root->val += aboveSum + right;

        return sumBelow;
    }

    TreeNode *convertBST(TreeNode *root)
    {
        dfs(root, 0);
        return root;
    }
};