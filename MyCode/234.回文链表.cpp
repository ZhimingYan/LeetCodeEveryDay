/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
        if(!head || !head->next)return true;
        auto p = head;
        while(p->next&&p->next->next){
            p= p->next;
        }
        if(p->next) {auto q = p->next;
        if(q->val!= head->val)
            return false;
        }
        p->next=nullptr;
        return isPalindrome(head->next);
        
    }
};

