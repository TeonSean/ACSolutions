/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val) {
            head = head->next;
        }
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* prev = head;
        ListNode* cur = head->next;
        while (cur) {
            if (cur->val == val) {
                prev->next = cur->next;
            }
            else {
                prev = cur;
            }
            cur = cur->next;
        }
        return head;
    }
};

