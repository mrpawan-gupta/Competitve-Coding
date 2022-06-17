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
    enum {noNeed = -1, need = 0, available = 1};
    int ans = 0;
    int DFS(TreeNode* root){
        if(!root)return noNeed;
        int l = DFS(root->left);
        int r = DFS(root->right);
        
        if(l==need || r==need){
            ans++;
            return available;
        }
        else if(l==available || r==available){
            return noNeed;
        }
        else{
            return need;
        }
    }
    int minCameraCover(TreeNode* root) {
        if(DFS(root)==need)ans++;
        return ans;
    }
};