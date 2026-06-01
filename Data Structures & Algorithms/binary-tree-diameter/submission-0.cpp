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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        dfs(root, res);
        return  res; 
    }

    int dfs(TreeNode* root, int& diameter){
        if(!root) 
            return 0;

        int left_res = dfs(root->left, diameter);
        int right_res = dfs(root->right, diameter);
        int res = left_res + right_res;
        diameter = max(diameter, res); 
        return 1 + max(left_res,right_res);
    }
};
