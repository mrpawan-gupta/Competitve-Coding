/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution{
public:
    unordered_map<Node *, Node *> mp;

    Node *traverse(Node *current){
        if (current == nullptr){
            return nullptr;
        }
        Node *copyCurrent = new Node(current->val);
        mp[current] = copyCurrent;

        copyCurrent->next = traverse(current->next);
        copyCurrent->random = mp[current->random];

        return copyCurrent;
    }
    Node *copyRandomList(Node *head){
        return traverse(head);
    }
};