/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     Listde(int x) : val(x), next(NULL) {}
 * };
 */
#include "head.hpp"
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if( !head -> next && n == 1) return nullptr;
        auto a = head;
        auto b = head;
        n = n + 1;
        while( n -- ) {
            if(!a && !n) return head->next;
            a = a->next;
        }

        while (a)
        {
            a = a->next;
            b = b->next;
        }
        b->next = b->next->next;
        
        return head;
    }
};

