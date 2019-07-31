/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        int maxv , minv;
        return dfs(root , maxv, minv);
    }
    bool dfs(TreeNode* root, int &maxv, int &minv){
        //if(!root) return true;
        maxv = minv = root->val;
        if(root->left){
            int nmaxv,nminv;
            if(!dfs(root->left, nmaxv,nminv))
                return false;
            if(nmaxv >= root->val)
                return false;
            maxv = max(maxv, nmaxv);
            minv = min(minv , nminv);
        }
        if(root->right){
             int nmaxv,nminv;
            if(!dfs(root->right, nmaxv,nminv))
                return false;
            if(nminv <= root->val)
                return false;
            maxv = max(maxv, nmaxv);
            minv = min(minv , nminv);
        }
        return true;
    }
   // return false;


};

