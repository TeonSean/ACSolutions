/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
  bool isSymmetric(TreeNode* root) {
    if (root == nullptr) {
      return true;
    }
    stack<TreeNode*> s;
    queue<TreeNode*> q;
    q.push(root->left);
    q.push(root->right);
    while (q.size()) {
      int n = q.size() / 2;
      for (int i = 0; i < n; i++) {
        auto head = q.front();
        s.push(head);
        if (head) {
          q.push(head->left);
          q.push(head->right);
        }
        q.pop();
      }
      for (int i = 0; i < n; i++) {
        auto head = q.front();
        if (s.top() == nullptr) {
          if (head != nullptr) {
            return false;
          }
        } else {
          if (head == nullptr || head->val != s.top()->val) {
            return false;
          }
          q.push(head->left);
          q.push(head->right);
        }
        s.pop();
        q.pop();
      }
    }
    return true;
  }
};
