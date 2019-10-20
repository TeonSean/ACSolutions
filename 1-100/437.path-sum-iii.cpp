/*
 * @lc app=leetcode id=437 lang=cpp
 *
 * [437] Path Sum III
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int visit(TreeNode* node, int sum) {
        if (node == nullptr) {
            return 0;
        }
        return visit(node->left, sum - node->val) + 
            visit(node->right, sum - node->val) + 
            (node->val == sum ? 1 : 0);
    }

    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr) {
            return 0;
        }
        return visit(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};
// @lc code=end

