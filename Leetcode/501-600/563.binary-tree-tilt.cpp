/*
 * @lc app=leetcode id=563 lang=cpp
 *
 * [563] Binary Tree Tilt
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
  int findTilt(TreeNode *root, int &sum) {
    if (root == nullptr) {
      return 0;
    }
    int left_sum = 0;
    int left_tilt = findTilt(root->left, left_sum);
    int right_sum = 0;
    int right_tilt = findTilt(root->right, right_sum);
    sum += left_sum + right_sum + root->val;
    return left_tilt + right_tilt + abs(left_sum - right_sum);
  }

  int findTilt(TreeNode *root) {
    int sum = 0;
    return findTilt(root, sum);
  }
};
// @lc code=end
