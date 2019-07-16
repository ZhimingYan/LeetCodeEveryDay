/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
       // auto p = head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        auto d = dummy;
        while (d ->next && d->next->next){
            auto p = d->next;
            auto q = p->next;
            d->next = q;
            p->next = q->next;
            q->next = p;
            d = p;

        }
        return dummy->next;
    
    }
};

