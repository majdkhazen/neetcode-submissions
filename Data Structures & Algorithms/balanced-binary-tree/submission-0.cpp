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
    bool isBalanced(TreeNode* root) {
        bool res = true; 
        helper(root,res);
        return res;
    }

    int helper(TreeNode* root, bool& res) {
        if (!root) return 0;
        int left_depth = helper(root->left, res);
        int right_depth = helper(root->right, res);
        if(left_depth - right_depth > 1 || left_depth - right_depth < -1){
            res = false; 
            return 0;
        }
        return 1+ max( left_depth , right_depth);
    }
};
