/*
 * @lc app=leetcode.cn id=237 lang=cpp
 *
 * [237] 删除链表中的节点
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
    void deleteNode(ListNode* node) {
        auto temp = node->next;
        node->val = temp->val;
        node->next = temp->next;


    }
};

