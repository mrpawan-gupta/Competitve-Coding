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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {

        queue<TreeNode *> qt;

        vector<vector<int>> res;
        TreeNode *temp = root;

        if (root == NULL)
            return res;
        int flag = 0;
        qt.push(root);
        vector<int> curr;

        while (!qt.empty())
        {
            int N = qt.size();
            curr.clear();

            for (int i = 0; i < N; i++)
            {
                temp = qt.front();
                qt.pop();
                curr.push_back(temp->val);
                if (temp->left != NULL)
                    qt.push(temp->left);
                if (temp->right != NULL)
                    qt.push(temp->right);
            }
            if (flag == 0)
            {
                res.push_back(curr);
                flag = 1;
            }
            else
            {
                reverse(curr.begin(), curr.end());
                res.push_back(curr);
                flag = 0;
            }
        }

        return res;
    }
};