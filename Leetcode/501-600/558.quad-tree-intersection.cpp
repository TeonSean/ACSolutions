/*
 * @lc app=leetcode id=558 lang=cpp
 *
 * [558] Quad Tree Intersection
 */

// @lc code=start
/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node*
_bottomLeft, Node* _bottomRight) { val = _val; isLeaf = _isLeaf; topLeft =
_topLeft; topRight = _topRight; bottomLeft = _bottomLeft; bottomRight =
_bottomRight;
    }
};
*/
class Solution {
public:
  Node *intersect(Node *quadTree1, Node *quadTree2) {
    if (quadTree1->isLeaf) {
      return quadTree1->val ? quadTree1 : quadTree2;
    }
    if (quadTree2->isLeaf) {
      return quadTree2->val ? quadTree2 : quadTree1;
    }
    auto topLeft = intersect(quadTree1->topLeft, quadTree2->topLeft);
    auto topRight = intersect(quadTree1->topRight, quadTree2->topRight);
    auto bottomLeft = intersect(quadTree1->bottomLeft, quadTree2->bottomLeft);
    auto bottomRight =
        intersect(quadTree1->bottomRight, quadTree2->bottomRight);
    if (topLeft->isLeaf && topRight->isLeaf && bottomLeft->isLeaf &&
        bottomRight->isLeaf && topLeft->val == topRight->val &&
        topRight->val == bottomLeft->val &&
        bottomLeft->val == bottomRight->val) {
      quadTree1->isLeaf = true;
      quadTree1->val = topRight->val;
    }
    quadTree1->topLeft = topLeft;
    quadTree1->topRight = topRight;
    quadTree1->bottomLeft = bottomLeft;
    quadTree1->bottomRight = bottomRight;
    return quadTree1;
  }
};
// @lc code=end
