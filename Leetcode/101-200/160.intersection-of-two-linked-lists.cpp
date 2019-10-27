/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == nullptr || headB == nullptr) {
      return nullptr;
    }
    ListNode *curA = headA;
    ListNode *curB = headB;
    int lenA = 1;
    int lenB = 1;
    while (curA->next) {
      lenA++;
      curA = curA->next;
    }
    while (curB->next) {
      lenB++;
      curB = curB->next;
    }
    if (curA != curB) {
      return nullptr;
    }
    for (int i = lenA; i < lenB; i++) {
      headB = headB->next;
    }
    for (int i = lenB; i < lenA; i++) {
      headA = headA->next;
    }
    while (true) {
      if (headA == headB) {
        return headA;
      }
      headA = headA->next;
      headB = headB->next;
    }
  }
};
