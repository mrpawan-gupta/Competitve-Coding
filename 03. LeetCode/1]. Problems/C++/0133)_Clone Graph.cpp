/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
    map<Node *, Node *> M = {{0, 0}};
    Node *dfs(Node *x)
    {
        if (M.count(x))
            return M[x];
        M[x] = new Node(x->val);
        for (Node *y : x->neighbors)
            M[x]->neighbors.push_back(dfs(y));
        return M[x];
    }

public:
    Node *cloneGraph(Node *node)
    {
        return dfs(node);
    }
};