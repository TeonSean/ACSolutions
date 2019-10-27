/*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
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
  bool isSameTree(TreeNode* p, TreeNode* q) {
    queue<TreeNode*> p_q;
    queue<TreeNode*> q_q;
    p_q.push(p);
    q_q.push(q);
    while (p_q.size()) {
      TreeNode* phead = p_q.front();
      TreeNode* qhead = q_q.front();
      p_q.pop();
      q_q.pop();
      if (phead == nullptr) {
        if (qhead != nullptr) {
          return false;
        }
      } else {
        if (qhead == nullptr || phead->val != qhead->val) {
          return false;
        }
        p_q.push(phead->left);
        p_q.push(phead->right);
        q_q.push(qhead->left);
        q_q.push(qhead->right);
      }
    }
    return true;
  }
};
