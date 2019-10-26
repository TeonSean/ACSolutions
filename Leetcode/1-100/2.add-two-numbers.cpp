/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(l1->val + l2->val);
        l1 = l1->next;
        l2 = l2->next;
        ListNode* cur = head;
        while(true) {
            if(l1 == nullptr) {
                if(l2 == nullptr) {
                    if(cur->val >= 10) {
                        cur->val -= 10;
                        cur->next = new ListNode(1);
                    }
                    break;
                }
                else {
                    if(cur->val >= 10) {
                        cur->val -= 10;
                        cur->next = new ListNode(1 + l2->val);
                    }
                    else {
                        cur->next = new ListNode(l2->val);
                    }
                    l2 = l2->next;
                }
            }
            else {
                if(l2 == nullptr) {
                    if(cur->val >= 10) {
                        cur->val -= 10;
                        cur->next = new ListNode(1 + l1->val);
                    }
                    else {
                        cur->next = new ListNode(l1->val);
                    }
                    l1 = l1->next;
                }
                else {
                    if(cur->val >= 10) {
                        cur->val -= 10;
                        cur->next = new ListNode(1 + l1->val + l2->val);
                    }
                    else {
                        cur->next = new ListNode(l1->val + l2->val);
                    }
                    l1 = l1->next;
                    l2 = l2->next;
                }
            }
            cur = cur->next;
        }
        return head;
    }
};

