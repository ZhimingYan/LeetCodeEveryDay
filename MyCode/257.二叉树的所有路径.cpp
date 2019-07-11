/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> res;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return res;
        dfs(root,"");
        return res;
    }
    void dfs(TreeNode* root,string str){
        if(!root->left&&!root->right){
            str += to_string(root->val);
            res.push_back(str);
            return;
        }
        // if(!root->left||!root->right){
        //     // str.pop_back();
        //     // str.pop_back();
        //     return;}
        str += to_string(root->val)+"->";
        if(root->left)
            dfs(root->left,str);
        if(root->right)
            dfs(root->right,str);
    }
};

