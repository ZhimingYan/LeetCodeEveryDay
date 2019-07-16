/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//#include<head.hpp>
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        auto p = head;
        //auto q = head;
        while(p){
            auto q = p->next;
            while (q && q->val == p->val) q = q->next;
            if(p->next != q) p -> next = q;
            p = p->next;

        }
        return head;
    }
};

