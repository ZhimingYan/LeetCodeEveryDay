/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层次遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        stack<pair<TreeNode*,int>>s;
        s.push({root,0});
        while (s.size())
        {
            auto t = s.top();
            s.pop();
            auto node = t.first;
            int level = t.second;
            if(level == res.size())
                res.push_back(vector<int>());
            res[level].push_back(node->val);
            if(node->right)
                s.push({node->right,level + 1});
            if(node->left) 
                s.push({node->left,level + 1});
            
        }
        return res;
        
    }
};

