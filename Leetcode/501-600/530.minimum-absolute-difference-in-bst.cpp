/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
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
  int prev = -1;
  int min_diff;

  void visit(TreeNode* node) {
    if (node == nullptr) {
      return;
    }
    visit(node->left);
    if (prev >= 0) {
      min_diff = min(min_diff, node->val - prev);
    }
    prev = node->val;
    visit(node->right);
  }

  int getMinimumDifference(TreeNode* root) {
    min_diff = INT_MAX;
    visit(root);
    return min_diff;
  }
};
// @lc code=end
