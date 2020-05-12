/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  int max{0};

  int visit(TreeNode* node) {
    int left_branch = 1;
    int right_branch = 1;
    if (node->left != nullptr) {
      int cnt = visit(node->left);
      if (node->left->val == node->val) {
        left_branch += cnt;
      }
    }
    if (node->right != nullptr) {
      int cnt = visit(node->right);
      if (node->right->val == node->val) {
        right_branch += cnt;
      }
    }
    max = std::max(max, left_branch + right_branch - 1);
    return std::max(left_branch, right_branch);
  }

  int longestUnivaluePath(TreeNode* root) {
    if (root == nullptr) {
      return 0;
    }
    visit(root);
    return max - 1;
  }
};