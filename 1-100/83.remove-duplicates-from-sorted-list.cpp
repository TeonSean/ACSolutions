/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        auto cur = head->next;
        auto last = head;
        while (cur) {
            if (cur->val != last->val) {
                last->next = cur;
                last = cur;
            }
            cur = cur->next;
        }
        last->next = nullptr;
        return head;
    }
};

