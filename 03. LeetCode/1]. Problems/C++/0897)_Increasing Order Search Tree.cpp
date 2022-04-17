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
    TreeNode *head = new TreeNode();
    TreeNode *it = head;
    void inorder(TreeNode *root){
        if (root == NULL)
            return;
        inorder(root->left);
        it->right = new TreeNode(root->val);
        it = it->right;
        inorder(root->right);
    }

    TreeNode *increasingBST(TreeNode *root){
        inorder(root);
        return head->right;
    }
};