/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return 0;
        auto first = head;
        auto second = head;
        while (first->next){
            first = first->next;
            second = second->next;
            if(!first->next) return nullptr;
            else first = first->next;
            if(first == second){
                first = head;
                while(first != second){
                    first = first->next;
                    second = second->next;
                }
                return second;
            }
        }
        return nullptr;
    }
};

