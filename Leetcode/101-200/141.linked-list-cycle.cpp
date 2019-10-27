/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
  bool hasCycle(ListNode* head) {
    if (head == nullptr) {
      return false;
    }
    ListNode* quick = head;
    ListNode* slow = head;
    while (true) {
      quick = quick->next;
      if (quick == nullptr) {
        return false;
      }
      quick = quick->next;
      if (quick == nullptr) {
        return false;
      }
      slow = slow->next;
      if (slow == quick) {
        return true;
      }
    }
  }
};
