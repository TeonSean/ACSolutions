/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
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
  vector<TreeNode *> candidates;

  int getDepth(TreeNode *root, int target) {
    if (root == nullptr) {
      return 0;
    }
    int depth =
        max(getDepth(root->left, target), getDepth(root->right, target)) + 1;
    if (depth == target) {
      candidates.emplace_back(root);
    }
    return depth;
  }

  bool isIdentical(TreeNode *s, TreeNode *t) {
    if (s == nullptr) {
      return t == nullptr;
    }
    if (t == nullptr) {
      return false;
    }
    return s->val == t->val && isIdentical(s->left, t->left) &&
           isIdentical(s->right, t->right);
  }

  bool isSubtree(TreeNode *s, TreeNode *t) {
    if (s == nullptr) {
      return t == nullptr;
    }
    if (t == nullptr) {
      return true;
    }
    getDepth(s, getDepth(t, -1));
    for (auto each : candidates) {
      if (isIdentical(each, t)) {
        return true;
      }
    }
    return false;
  }
};
// @lc code=end
