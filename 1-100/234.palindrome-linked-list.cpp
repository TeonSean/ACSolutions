/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) {
            return true;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;
        ListNode* first_head;
        ListNode* second_head;
        while (true) {
            fast = fast->next;
            if (fast == nullptr) {
                first_head = prev;
                second_head = slow->next;
                break;
            }
            fast = fast->next;
            ListNode* next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
            if (fast == nullptr) {
                first_head = prev;
                second_head = slow;
                break;
            }
        }
        while (first_head) {
            if (first_head->val != second_head->val) {
                return false;
            }
            first_head = first_head->next;
            second_head = second_head->next;
        }
        return true;
    }
};

