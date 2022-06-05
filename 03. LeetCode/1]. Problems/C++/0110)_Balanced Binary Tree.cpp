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
class Solution {
public:
	int Helper(TreeNode* root){
		if(root==NULL)
			return 0;
		int leftNode = Helper(root->left);
		int rightNode = Helper(root-> right);

		if(leftNode==-1 || rightNode==-1)
			return -1;
		if(abs(leftNode-rightNode)>1)
			return -1;
		return max(leftNode,rightNode)+1;
	}
	bool isBalanced(TreeNode* root) {
		if(Helper(root)==-1)
			return false;
		return true;
	}
};