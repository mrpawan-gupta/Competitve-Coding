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
class BSTIterator
{
    TreeNode *myroot;
    vector<int> vec;
    int curr;

public:
    BSTIterator(TreeNode *root)
    {
        myroot = root;
        populateInOrder(myroot);
        curr = 0;
    }

    // Just return value from vector
    int next()
    {
        return vec[curr++];
    }

    // Check if next element exists else return false
    bool hasNext()
    {
        if (curr == vec.size())
            return false;

        return true;
    }

    // Perform pre-order traversal and store values in vector
    void populateInOrder(TreeNode *root)
    {
        if (root == NULL)
            return;

        populateInOrder(root->left);
        vec.push_back(root->val);
        populateInOrder(root->right);
    }
};
/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */