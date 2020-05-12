/*
 * @lc app=leetcode id=606 lang=cpp
 *
 * [606] Construct String from Binary Tree
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
  string re;

  void Visit(TreeNode* node) {
    re += to_string(node->val);
    if (node->left == nullptr) {
      if (node->right == nullptr) {
        return;
      }
      re += "()";
    } else {
      re += '(';
      Visit(node->left);
      re += ')';
    }
    if (node->right == nullptr) {
      return;
    }
    re += '(';
    Visit(node->right);
    re += ')';
  }

  string tree2str(TreeNode* t) {
    if (t == nullptr) {
      return "";
    }
    re = "";
    Visit(t);
    return re;
  }
};
// @lc code=end
