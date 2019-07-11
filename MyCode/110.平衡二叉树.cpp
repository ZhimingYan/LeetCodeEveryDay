/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
class Solution {
    bool isb = true ;
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        //isb = true;
        dfs(root);
        return isb;
    }
    int dfs(TreeNode* root){
        if(!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if(abs(left - right) -1 >0)
            isb = false;
        return max(left ,right) +1;
    }
};

