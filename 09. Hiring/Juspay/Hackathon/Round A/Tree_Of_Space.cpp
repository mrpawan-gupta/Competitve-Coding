#include <bits/stdc++.h>
using namespace std;

static int Nodenum = 1;

class Node{
	public:
	int key;
	bool isLocked;
	bool isLockabe;
	int nodeNumber;
	vector<Node*>children;
	Node *parent;
	Node(Node *parent);
	Node();
};
Node::Node(){
	key = -1;
	this->parent = NULL;
	isLockabe = true;
	isLocked = false;
	nodeNumber = Nodenum++;
}
Node::Node(Node* parent){
	key = -1;
	this->parent = parent;
	isLockabe = true;
	isLocked = false;
	nodeNumber = Nodenum++;
}
class NaryTree{
	public:
	bool lock(Node* root,int key);
	bool unlock(Node* root,int key);
	bool update(Node* root,int key);
};
bool NaryTree::lock(Node *root, int key){
	if(root->isLockabe == false || (root->isLocked))return false;
	Node* node = root;
	queue<Node*>q;
	q.push(node);
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		for(auto tnode:temp->children){
			if(tnode->isLocked)return false;
			q.push(tnode);
		}
	}
	root->key = key;
	root->isLocked = true;
	q.push(node);
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		for(auto tnode: temp->children){
			tnode->isLockabe = false;
			q.push(tnode);
		}
	}
	return true;
}
bool NaryTree::unlock(Node *root, int key){
	if(root->isLockabe == false || root->isLocked == false || (root->isLocked && key!=root->key)){
		return false;
	}
	Node* node = root;
	root->isLocked = false;
	root->key = -1;
	queue<Node*>q;
	q.push(node);
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		for(auto tnode: temp->children){
			tnode->isLockabe = true;
			q.push(tnode);
		}
	}
	return true;
}
bool NaryTree::update(Node *root, int key){
	if(root->isLockabe == false || root->isLocked == true){
		return false;
	}
	Node* node = root;
	queue<Node*>q;
	q.push(node);
	bool checkLocked = false;
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		for(auto tnode:temp->children){
			if(tnode->isLocked == true && key!=tnode->key){
				return false;
			}
			if(tnode->isLocked)checkLocked = true;
			q.push(tnode);
		}
	}
	if(!checkLocked)return false;
	q.push(node);
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		for(auto tnode:temp->children){
			//tnode->isLocked = false;
			if(tnode->isLocked){
				if(!unlock(tnode,key)) return false;
			}
			//if(!unlock(tnode,key)) return false;
			q.push(tnode);
		}
	}
	return lock(root,key); 
}
unordered_map<string, Node*>AllNodes;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int no_of_node; cin >> no_of_node;
	int no_of_children; cin >> no_of_children;
	int no_of_queries; cin >> no_of_queries;
	NaryTree obtree;
	Node* root = new Node();
	string root_string; cin >> root_string;
	AllNodes[root_string] = root;
	queue<Node*>queue;
	queue.push(root);
	//cout << root->nodeNumber <<" " << root->key  << endl;
	int count = 1;
	while(!queue.empty()){
		auto temp = queue.front();
		queue.pop();
		//cout <<  temp->key << " " << temp->nodeNumber << endl;
		while(count < no_of_node && (int)temp->children.size() < no_of_children){
			string new_node_string;
			cin >> new_node_string;
			Node* newNode = new Node(temp);
			AllNodes[new_node_string] = newNode;
			temp->children.push_back(newNode);
			queue.push(newNode);
			count++;
		}
	}
	for(int i = 0; i < no_of_queries; ++i){
		int query,key;
		string name;
		bool ans = false;
		cin >> query >> name >> key;
		if(query == 1){
			ans  = obtree.lock(AllNodes[name], key);
		}
		else if(query == 2){
			ans = obtree.unlock(AllNodes[name], key);
		}
		else{
			ans = obtree.update(AllNodes[name], key);
		}
		if(ans) cout << "true" << '\n';
		else cout << "false" << '\n';
	}
	return 0;
}