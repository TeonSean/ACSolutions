/*
 * @lc app=leetcode id=589 lang=cpp
 *
 * [589] N-ary Tree Preorder Traversal
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
  vector<int> preorder(Node *root) {
    if (root == nullptr) {
      return {};
    }
    vector<int> re;
    deque<Node *> nodes;
    nodes.emplace_back(root);
    while (nodes.size() != 0) {
      Node *cur = nodes.front();
      nodes.pop_front();
      for (int i = cur->children.size() - 1; i >= 0; i--) {
        if (cur->children[i] == nullptr) {
          continue;
        }
        nodes.emplace_front(cur->children[i]);
      }
      re.emplace_back(cur->val);
    }
    return re;
  }
};
// @lc code=end
