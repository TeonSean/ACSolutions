/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
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
    TreeNode* createTree(vector<int>& nums, const int begin, const int end) {
        if (begin == end) {
            return nullptr;
        }
        int mid = (begin + end) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = createTree(nums, begin, mid);
        node->right = createTree(nums, mid + 1, end);
        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree(nums, 0, nums.size());
    }
};

