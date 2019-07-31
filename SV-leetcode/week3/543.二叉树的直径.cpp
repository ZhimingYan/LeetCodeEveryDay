/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    int res;
public:
    
    int diameterOfBinaryTree(TreeNode* root) {
        res = 0;
        dfs(root);
        return res;
    }

    int dfs(TreeNode* root)
    {
        if (!root) return 0;
        auto l = dfs(root->left);
        auto r = dfs(root->right);
        res = max(res, l + r);
        return max(l, r) + 1;
    }

};

