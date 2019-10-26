/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    void tryLeaf(TreeNode* node, string str, vector<string>& re) {
        str += "->";
        stringstream ss;
        ss << node->val;
        str += ss.str();
        if (node->left == nullptr) {
            if (node->right == nullptr) {
                re.push_back(str.substr(2));
            }
            else {
                tryLeaf(node->right, str, re);
            }
        }
        else {
            tryLeaf(node->left, str, re);
            if (node->right != nullptr) {
                tryLeaf(node->right, str, re);
            }
        }
        return;
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> re;
        if (root != nullptr) {
            tryLeaf(root, "", re);
        }
        return re;
    }
};

