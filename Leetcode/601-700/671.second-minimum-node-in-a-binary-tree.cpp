/*
 * @lc app=leetcode id=671 lang=cpp
 *
 * [671] Second Minimum Node In a Binary Tree
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
  int minimum;

  int visit(TreeNode* node) {
    if (node->val > minimum) {
      return node->val;
    }
    if (node->left == nullptr) {
      return -1;
    }
    int left = visit(node->left);
    int right = visit(node->right);
    if (left != -1) {
      if (right != -1) {
        return min(left, right);
      }
      return left;
    }
    return right;
  }

  int findSecondMinimumValue(TreeNode* root) {
    if (root == nullptr || root->left == nullptr) {
      return -1;
    }
    minimum = root->val;
    return visit(root);
  }
};
// @lc code=end
