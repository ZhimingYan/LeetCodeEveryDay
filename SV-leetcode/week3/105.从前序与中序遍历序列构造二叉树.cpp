/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    unordered_map<int, int>mp;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() != inorder.size()) return nullptr;
        if(preorder.size() == 0) return nullptr;
        for(int i = 0; i < inorder.size() ; i++ ) mp[inorder[i]] = i;
        return dfs(preorder,inorder,0,preorder.size() - 1, 0, inorder.size() - 1);

    }
    TreeNode* dfs(vector<int> &pre, vector<int> &in, int pl, int pr, int il, int ir){
        if(il > ir) return nullptr;
        int index = mp[pre[pl]];
        TreeNode* root = new TreeNode(pre[pl]);
        root->left = dfs(pre,in,pl + 1,pl + index-il, il, index-1);
        root->right = dfs(pre, in, pl + index-il +1,pr,index+1, ir);
        return root;
    }
};

