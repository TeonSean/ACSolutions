/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
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
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    TreeNode* node = root;
    while (true) {
      int diffp = node->val - p->val;
      int diffq = node->val - q->val;
      if (diffp * diffq <= 0) {
        return node;
      } else {
        node = diffp > 0 ? node->left : node->right;
      }
    }
  }
};
