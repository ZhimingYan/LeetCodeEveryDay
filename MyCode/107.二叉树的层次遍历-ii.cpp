/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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

#include<vector>
#include<queue>
#include<utility>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(q.size()){
            auto t = q.front();
            auto root = t.first;
            auto level = t.second;
            q.pop();
            if(res.size() == level){
                res.push_back(vector<int>());
            }
            res[level].push_back(root->val);
            if(root->left){
                q.push({root->left,level+1});
            }
            if(root->right){
                q.push({root->right,level + 1});
            }
        }
        // vector<vector<int>>res2;
        // for(int i = 0; i < res.size();i++){
        //     res2.push_back(vector)
        // }
        reverse(res.begin(),res.end());
        return res;

    }
};

