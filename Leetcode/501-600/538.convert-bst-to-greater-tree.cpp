/*
 * @lc app=leetcode id=538 lang=cpp
 *
 * [538] Convert BST to Greater Tree
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
    int prev;
    int prev_cnt;
    int sum;

    void visit(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        visit(node->right);
        if (node->val != prev) {
            sum += prev * prev_cnt;
            prev = node->val;
            prev_cnt = 0;
        }
        node->val += sum;
        prev_cnt++;
        visit(node->left);
    }

    TreeNode* convertBST(TreeNode* root) {
        prev_cnt = 0;
        prev = INT_MIN;
        sum = 0;
        visit(root);
        return root;
    }
};
// @lc code=end

