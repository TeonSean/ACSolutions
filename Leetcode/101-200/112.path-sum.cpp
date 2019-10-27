/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
  bool check(TreeNode* node, int sum) {
    if (node->left == nullptr) {
      if (node->right == nullptr) {
        return sum == node->val;
      } else {
        return check(node->right, sum - node->val);
      }
    } else {
      return check(node->left, sum - node->val) ||
             (node->right != nullptr && check(node->right, sum - node->val));
    }
  }

  bool hasPathSum(TreeNode* root, int sum) {
    return root != nullptr && check(root, sum);
  }
};
