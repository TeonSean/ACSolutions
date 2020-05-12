/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
  bool findTarget(TreeNode* root, int k) {
    if (root == nullptr) {
      return false;
    }
    queue<TreeNode*> q;
    q.emplace(root);
    set<int> target;
    while (!q.empty()) {
      TreeNode* cur = q.front();
      q.pop();
      if (target.count(cur->val) != 0) {
        return true;
      }
      target.emplace(k - cur->val);
      if (cur->left != nullptr) {
        q.emplace(cur->left);
      }
      if (cur->right != nullptr) {
        q.emplace(cur->right);
      }
    }
    return false;
  }
};
// @lc code=end
