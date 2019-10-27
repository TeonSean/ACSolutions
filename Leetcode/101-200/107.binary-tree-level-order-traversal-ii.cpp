/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
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
  vector<vector<int>> levelOrderBottom(TreeNode* root) {
    if (root == nullptr) {
      return vector<vector<int>>();
    }
    vector<vector<int>> top_down;
    vector<TreeNode*> nodes;
    nodes.push_back(root);
    int nodes_index = 0;
    while (nodes_index != nodes.size()) {
      int bound = nodes.size();
      top_down.push_back(vector<int>());
      for (; nodes_index < bound; nodes_index++) {
        TreeNode* node = nodes[nodes_index];
        top_down.back().push_back(node->val);
        if (node->left) {
          nodes.push_back(node->left);
        }
        if (node->right) {
          nodes.push_back(node->right);
        }
      }
    }
    return vector<vector<int>>(top_down.rbegin(), top_down.rend());
  }
};
