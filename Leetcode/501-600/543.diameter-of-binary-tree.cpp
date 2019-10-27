/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
  int cur_max;

  int Visit(TreeNode *node) {
    if (node == nullptr) {
      return 0;
    }
    int left_depth = Visit(node->left);
    int right_depth = Visit(node->right);
    cur_max = max(cur_max, left_depth + right_depth);
    return max(left_depth, right_depth) + 1;
  }

  int diameterOfBinaryTree(TreeNode *root) {
    cur_max = 0;
    Visit(root);
    return cur_max;
  }
};
// @lc code=end
