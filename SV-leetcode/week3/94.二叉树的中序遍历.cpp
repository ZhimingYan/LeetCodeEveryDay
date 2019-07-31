/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//#include "head.hpp"
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        if(!root) return res;
        while (root || !s.empty())
        {
            while(root){
                s.push(root);
                root = root->left;
            }
            TreeNode* t = s.top();
            s.pop();
            res.push_back(t->val);
            root = t->right;
        }
        return res;

    }
};

