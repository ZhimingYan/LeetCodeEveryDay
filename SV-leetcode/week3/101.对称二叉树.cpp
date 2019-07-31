/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return dfs(root->left,root->right);
    }
    bool dfs(TreeNode* root1, TreeNode* root2){
        if(!root1 && !root2) return true;
        if(!root1 && root2) return false;
        if(root1 && !root2) return false;
        if(root1->val != root2->val) return false;
        return dfs(root1->left,root2->right)&&dfs(root1->right,root2->left);

    }
};

