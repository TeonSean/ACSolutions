/*
 * @lc app=leetcode id=429 lang=cpp
 *
 * [429] N-ary Tree Level Order Traversal
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
  struct depth_node {
    Node* ptr;
    int depth;

   public:
    depth_node(Node* ptr, int depth) {
      this->ptr = ptr;
      this->depth = depth;
    }
  };

  vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> re;
    queue<depth_node> nodes;
    if (root) {
      nodes.push(depth_node(root, 0));
    }
    while (nodes.size()) {
      depth_node& dn = nodes.front();
      if (dn.depth == re.size()) {
        re.push_back(vector<int>());
      }
      re[dn.depth].push_back(dn.ptr->val);
      for (Node* each : dn.ptr->children) {
        nodes.push(depth_node(each, dn.depth + 1));
      }
      nodes.pop();
    }
    return re;
  }
};
// @lc code=end
