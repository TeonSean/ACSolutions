/*
 * @lc app=leetcode id=590 lang=cpp
 *
 * [590] N-ary Tree Postorder Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
 public:
  vector<int> postorder(Node *root) {
    if (root == nullptr) {
      return {};
    }
    unordered_set<Node *> expanded;
    vector<int> re;
    deque<Node *> nodes;
    nodes.emplace_front(root);
    while (nodes.size() != 0) {
      Node *cur = nodes.front();
      nodes.pop_front();
      if (cur->children.size() == 0 || expanded.count(cur) != 0) {
        re.emplace_back(cur->val);
        continue;
      }
      nodes.emplace_front(cur);
      for (int i = cur->children.size() - 1; i >= 0; i--) {
        if (cur->children[i] == nullptr) {
          continue;
        }
        nodes.emplace_front(cur->children[i]);
      }
      expanded.emplace(cur);
    }
    return re;
  }
};
// @lc code=end
