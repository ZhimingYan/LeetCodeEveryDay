/*
 * @lc app=leetcode.cn id=148 lang=cpp
 *
 * [148] 排序链表
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
    ListNode* sortList(ListNode* head) {
        if( !head || !head->next) return head;
        auto fast = head;
        auto slow = head;
        while (fast->next && fast->next->next)
        {
            fast = fast -> next->next;;
            slow = slow -> next;
        }
        //auto mid = slow;
        auto lhead = slow->next;
        slow->next = nullptr;
        //auto head1 = head;
        auto head1 = sortList(head);
        auto head2 = sortList(lhead);
        return merge(head1,head2);
    }
    ListNode* merge(ListNode *l1, ListNode *l2){
         ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy;
        while (l1 != NULL && l2 != NULL) {
            if (l1 -> val < l2 -> val) {
                cur -> next = l1;
                l1 = l1 -> next;
            }
            else {
                cur -> next = l2;
                l2 = l2 -> next;
            }
            cur = cur -> next;
        }
        cur -> next = (l1 != NULL ? l1 : l2);
        return dummy -> next;
    }
    
};

