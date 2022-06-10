/* 
Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references.

A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.


Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
Output: [[5,4,11,2],[5,8,4,5]]
Explanation: There are two paths whose sum equals targetSum:
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22

*/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void DFS(TreeNode* root, int t, int s, vector<int> &path, vector<vector<int>> &ans) {
        if(!root) return;
        
        path.push_back(root -> val);
        s += root -> val;
        DFS(root -> left, t, s, path, ans);
        DFS(root -> right, t, s, path, ans);
        
        if((!root -> left && !root -> right) && s == t) ans.push_back(path);
        
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        DFS(root, targetSum, 0, path, ans);
        
        return ans;
    }
};

