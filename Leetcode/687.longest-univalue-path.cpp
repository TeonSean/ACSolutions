/*
 * @lc app=leetcode id=687 lang=cpp
 *
 * [687] Longest Univalue Path
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
  int cur_value;
  int cur_max;
  int cnt;

  void visit(TreeNode* node) {
    if (node->left != nullptr) {
      visit(node->left);
    }
    if (node->val != cur_value) {
      cnt = 0;
      cur_value = node->val;
    } else {
      cnt++;
    }
    cur_max = max(cur_max, cnt);
    if (node->right != nullptr) {
      visit(node->right);
    }
  }

  int longestUnivaluePath(TreeNode* root) {
    cur_max = 0;
    if (root != nullptr) {
      cur_value = INT_MIN;
      cnt = 0;
      visit(root);
    }
    return cur_max;
  }
};
// @lc code=end
