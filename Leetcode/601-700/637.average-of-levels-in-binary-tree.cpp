/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
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
  vector<double> averageOfLevels(TreeNode* root) {
    if (root == nullptr) {
      return {};
    }
    vector<double> re;
    queue<TreeNode*> q;
    TreeNode* level_head = root;
    long long level_sum = 0;
    int level_cnt = 0;
    q.emplace(root);
    while (!q.empty()) {
      TreeNode* cur = q.front();
      q.pop();
      if (level_head == cur) {
        if (level_cnt != 0) {
          re.emplace_back(level_sum / (double)level_cnt);
        }
        level_sum = 0;
        level_cnt = 0;
        level_head = nullptr;
      }
      level_sum += cur->val;
      level_cnt++;
      if (cur->left != nullptr) {
        q.emplace(cur->left);
        if (level_head == nullptr) {
          level_head = cur->left;
        }
      }
      if (cur->right != nullptr) {
        q.emplace(cur->right);
        if (level_head == nullptr) {
          level_head = cur->right;
        }
      }
    }
    re.emplace_back(level_sum / (double)level_cnt);
    return re;
  }
};
// @lc code=end
