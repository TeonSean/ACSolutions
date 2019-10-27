/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 */
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
  int tryDepth(TreeNode* node) {
    if (node == nullptr) {
      return 0;
    }
    int left = tryDepth(node->left);
    if (left < 0) {
      return -1;
    }
    int right = tryDepth(node->right);
    if (right < 0 || abs(left - right) > 1) {
      return -1;
    }
    return max(left, right) + 1;
  }

  bool isBalanced(TreeNode* root) { return tryDepth(root) >= 0; }
};
