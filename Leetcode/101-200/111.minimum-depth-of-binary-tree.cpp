/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
  void traverse(TreeNode* node, int cur, int& min_depth) {
    if (cur >= min_depth) {
      return;
    }
    if (node->left == nullptr) {
      if (node->right == nullptr) {
        min_depth = min(cur, min_depth);
        return;
      } else {
        traverse(node->right, cur + 1, min_depth);
      }
    } else {
      traverse(node->left, cur + 1, min_depth);
      if (node->right != nullptr) {
        traverse(node->right, cur + 1, min_depth);
      }
    }
  }

  int minDepth(TreeNode* root) {
    if (root == nullptr) {
      return 0;
    }
    int md = INT_MAX;
    traverse(root, 1, md);
    return md;
  }
};
