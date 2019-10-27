/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode(0);
    ListNode* cur = head;
    while (true) {
      if (l1 == nullptr) {
        cur->next = l2;
        break;
      }
      if (l2 == nullptr) {
        cur->next = l1;
        break;
      }
      if (l1->val > l2->val) {
        cur->next = l2;
        l2 = l2->next;
      } else {
        cur->next = l1;
        l1 = l1->next;
      }
      cur = cur->next;
    }
    return head->next;
  }
};
