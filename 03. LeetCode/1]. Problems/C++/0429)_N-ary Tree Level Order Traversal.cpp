/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution{
public:
    vector<vector> levelOrder(Node *root){
        vector<vector> sol;
        vector ans;
        if (root == NULL) return sol;
        else{
            queue<Node*> q;
            q.push(root);
            while (!q.empty()){
                int x = q.size();
                for (int i = 0; i < x; i++){
                    Node *front = q.front();
                    q.pop();
                    ans.push_back(front->val);
                    for (auto y : front->children){
                        if (y){
                            q.push(y);
                        }
                    }
                }

                sol.push_back(ans);
                ans.clear();
            }
        }

        return sol;
    }
};