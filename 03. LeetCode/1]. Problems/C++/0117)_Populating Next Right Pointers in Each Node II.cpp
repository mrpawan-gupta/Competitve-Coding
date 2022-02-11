/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

template <typename Func>
void Traverse(Func func, int level, Node *root)
{
    if (!root)
    {
        return;
    }

    func(root, level);
    Traverse(func, level + 1, root->left);
    Traverse(func, level + 1, root->right);
}

class Solution
{
public:
    Node *connect(Node *root)
    {
        auto levelNodes = std::vector<Node *>{};
        Traverse([&levelNodes](auto *node, int level)
                 {
        if(levelNodes.size() < level + 1) {
          levelNodes.resize(level + 1);
          levelNodes[level] = node;
          return;
        }
        levelNodes[level]->next = node;
        levelNodes[level] = node; },
                 0, root);
        return root;
    }
};