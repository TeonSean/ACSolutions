/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
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
    vector<int> re;
    int max_cnt;
    long long prev;
    int cur_cnt;

    void visit(TreeNode* node) {
        if (node->left != nullptr) {
            visit(node->left);
        }
        if (node->val == prev) {
            cur_cnt++;
        } else {
            cur_cnt = 1;
            prev = node->val;
        }
        if (cur_cnt > max_cnt) {
            max_cnt = cur_cnt;
            re.clear();
            re.emplace_back(node->val);
        } else if(cur_cnt == max_cnt)
        {
            re.emplace_back(node->val);
        }
        if (node->right != nullptr) {
            visit(node->right);
        }
    }

    vector<int> findMode(TreeNode* root) {
        if (root == nullptr) {
            return re;
        }
        max_cnt = 0;
        cur_cnt = 0;
        prev = root->val + 1ll;
        visit(root);
        return re;
    }
};
// @lc code=end

