/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        for (ListNode *p = dummy; p;)
        {
            if (p->next && p->next->val == val)
                p->next = p->next->next;
            else
                p = p->next;
        }
        return dummy->next;
    }
};

