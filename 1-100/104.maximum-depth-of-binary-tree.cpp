/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    void traverse(TreeNode* node, int cur, int& max_depth) {
        max_depth = max(cur, max_depth);
        if (node->left != nullptr) {
            traverse(node->left, cur + 1, max_depth);
        }
        if (node->right != nullptr) {
            traverse(node->right, cur + 1, max_depth);
        }
    }

    int maxDepth(TreeNode* root) {
        int md = 0;
        if (root != nullptr) {
            traverse(root, 1, md);
        }
        return md;
    }
};

