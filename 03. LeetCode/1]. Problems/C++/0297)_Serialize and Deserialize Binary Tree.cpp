/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        return root == NULL ? "" : to_string(root->val) + '[' + serialize(root->left) + ']' + '[' + serialize(root->right) + ']';
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {

        map<int, int> openCloseBracketPair;
        stack<int> s;

        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] == '[')
                s.push(i);
            if (data[i] == ']')
            {
                openCloseBracketPair[s.top()] = i;
                s.pop();
            }
        }

        return deserializeHelper(data, openCloseBracketPair, 0, data.length());
    }

    TreeNode *deserializeHelper(string &data, map<int, int> &mp, int s, int e)
    {

        if (s >= e)
            return NULL;

        string nodeValue = "";
        while (data[s] != '[')
        {
            nodeValue += data[s];
            s++;
        }

        TreeNode *node = new TreeNode(stoi(nodeValue));

        int leftSubtreeEndIndex = mp[s];

        node->left = deserializeHelper(data, mp, s + 1, leftSubtreeEndIndex - 1);
        node->right = deserializeHelper(data, mp, leftSubtreeEndIndex + 2, e - 1);

        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));