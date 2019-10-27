/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
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
  void tryLeaf(TreeNode* node, int& sum, bool is_left) {
    if (node->left == nullptr) {
      if (node->right == nullptr) {
        if (is_left) {
          sum += node->val;
        }
        return;
      }
      tryLeaf(node->right, sum, false);
    } else {
      tryLeaf(node->left, sum, true);
      if (node->right != nullptr) {
        tryLeaf(node->right, sum, false);
      }
    }
  }

  int sumOfLeftLeaves(TreeNode* root) {
    if (root == nullptr) {
      return 0;
    }
    int sum = 0;
    tryLeaf(root, sum, false);
    return sum;
  }
};
