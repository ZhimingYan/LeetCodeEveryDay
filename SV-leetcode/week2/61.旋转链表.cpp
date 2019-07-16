/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head ) return nullptr;
       // if( k == 0) return head;
       // if(!head -> next) return head;
        auto q = head;
        int n = 0;
        while (q->next){
            q = q->next;
            n++;
        }
        q -> next = head;
        q = q->next;
         k = n - k%(n+1);
        while (k--) q = q->next; 
        head = q->next ;
        q ->next = nullptr;
        return head;
        
    }
      ListNode* rotateRight2(ListNode* head, int k) {
        if (!head) return head;

        int n = 0;
        ListNode *p = head;
        while (p)
        {
            n ++ ;
            p = p->next;
        }

        k %= n;
        if (!k) return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *first = dummy;
        while (k -- && first) first = first->next;
        ListNode *second = dummy;
        while (first->next)
        {
            first = first->next;
            second = second->next;
        }
        first->next = dummy->next;
        dummy->next = second->next;
        second->next = 0;
        return dummy->next;
    }
};

