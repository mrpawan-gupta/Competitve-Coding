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
    int widthOfBinaryTree(TreeNode *root)
    {
        long ans = 1;
        if (!root)
            return 0;
        queue<pair<TreeNode *, long>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int s = q.size();
            long curr = 0;
            for (int i = 0; i < s; i++)
            {
                auto p = q.front();
                q.pop();
                if (i == 0)
                    curr = p.second;
                else
                    ans = max(ans, p.second - curr + 1);

                if (p.first->left)
                    q.push({p.first->left, p.second * 2 - curr});
                if (p.first->right)
                    q.push({p.first->right, p.second * 2 - curr + 1});
            }
        }
        return ans;
    }
};