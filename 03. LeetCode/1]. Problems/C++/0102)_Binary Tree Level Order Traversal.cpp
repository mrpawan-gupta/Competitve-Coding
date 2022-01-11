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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return {};
        }
        queue<TreeNode *> q, new_q;
        q.push(root);
        vector<vector<int>> result;
        vector<int> level_n;
        while (!q.empty())
        {
            TreeNode *front_node = q.front();
            q.pop();
            level_n.push_back(front_node->val);
            if (front_node->left)
            {
                new_q.push(front_node->left);
            }
            if (front_node->right)
            {
                new_q.push(front_node->right);
            }

            if (q.empty())
            {
                q = move(new_q);
                result.push_back(move(level_n));
            }
        }
        return result;
    }
};