#include <bits/stdc++.h>
using namespace std;

static int Nodenum = 1;

class Node{
	public:
	int userId;
	bool isLocked;
	bool isLockable;
	int nodeNumber;
	bool isResourceInUse;
	vector<Node*>children;
	Node *parent;
	Node(Node *parent);
	Node();
};
Node::Node(){
	userId = -1;
	this->parent = NULL;
	isLockable = true;
	isLocked = false;
	nodeNumber = Nodenum++;
	isResourceInUse = false;
}
Node::Node(Node* parent){
	userId = -1;
	this->parent = parent;
	isLockable = true;
	isLocked = false;
	nodeNumber = Nodenum++;
	isResourceInUse = false;
}
class NaryTree{
	public:
	bool lock(Node* root,int userId);
	bool unlock(Node* root,int userId);
	bool update(Node* root,int userId);
	void print(Node* root);
};
bool NaryTree::lock(Node *root, int userId){
	if(root->isLockable == false || (root->isLocked)){
        return false;
    }
    Node* currNode = root;
    bool checkLocked = false;
    while (currNode != NULL) {
        if (currNode->isLocked == true) {
            checkLocked = true;
            break;
        }
        currNode = currNode->parent;
    }
    if (checkLocked) return false;
    else {
        root->isLocked = true;
        currNode = root;
        // marking isLockable as false for ancestor nodes.
        while (currNode != NULL) {
            currNode->isLockable = false;
            currNode = currNode->parent;
        }
    }
	return true;
}
bool NaryTree::unlock(Node *root, int userId){
    if (root->isLockable == false || root->isLocked == false || (root->isLocked && userId != root->userId)) {
        return false;
    }
	Node* currNode = root;
	root->isLocked = false;
	root->userId = -1;
    // marking isLockable as true for ancestor nodes.
    while (currNode != NULL) {
        currNode->isLockable = true;
        currNode = currNode->parent;
    }
	return true;
}
bool NaryTree::update(Node *root, int userId){
	if(root->isLockable == false || root->isLocked == true){
		return false;
	}
	Node* node = root;
	queue<Node*>q;
	q.push(node);
	bool checkLocked = false;
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		for(auto currNode:temp->children){
			if(currNode->isLocked == true && userId!=currNode->userId){
				return false;
			}
			if(currNode->isLocked)checkLocked = true;
			q.push(currNode);
		}
	}
	if(!checkLocked)return false;
	q.push(node);
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		for(auto currNode:temp->children){
			//currNode->isLocked = false;
			if(currNode->isLocked){
				if(!unlock(currNode,userId)) return false;
			}
			//if(!unlock(currNode,userId)) return false;
			q.push(currNode);
		}
	}
	return lock(root,userId); 
}
unordered_map<string, Node*>AllNodes;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
      	freopen("input.txt","r", stdin);
      	freopen("output.txt","w", stdout);
    #endif

	int no_of_node; cin >> no_of_node;
	int no_of_children; cin >> no_of_children;
	int no_of_queries; cin >> no_of_queries;
	NaryTree obtree;
	Node* root = new Node();
	string root_string; cin >> root_string;
	AllNodes[root_string] = root;
	queue<Node*>queue;
	queue.push(root);
	int count = 1;
	while(!queue.empty()){
		auto temp = queue.front();
		queue.pop();
		while(count < no_of_node && (int)temp->children.size() < no_of_children){
			string new_node_string;
			cin >> new_node_string;
			Node* newNode = new Node(temp);
			AllNodes[new_node_string] = newNode;
			temp->children.push_back(newNode);
			queue.push(newNode);
			count++;
		}
		//obtree.print(temp);
	}
	//obtree.print(root);
	for(int i = 0; i < no_of_queries; ++i){
		int query,userId;
		string name;
		bool ans = false;
		cin >> query >> name >> userId;

		//obtree.print(AllNodes[name]);
		if(query == 1){
			ans  = obtree.lock(AllNodes[name], userId);
		}
		else if(query == 2){
			ans = obtree.unlock(AllNodes[name], userId);
		}
		else{
			ans = obtree.update(AllNodes[name], userId);
		}
		if(ans) cout << "true" << '\n';
		else cout << "false" << '\n';
	}
	return 0;
}
