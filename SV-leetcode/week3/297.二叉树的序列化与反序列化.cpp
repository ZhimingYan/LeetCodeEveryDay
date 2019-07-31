/*
 * @lc app=leetcode.cn id=297 lang=cpp
 *
 * [297] 二叉树的序列化与反序列化
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
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res;
        dfs_s(root,res);
        return res;
    }
    void dfs_s(TreeNode* root,string& res){
        if(!root){
            res += "null ";
            return;
        }
        res += to_string(root->val) + ' ';
        dfs_s(root->left,res);
        dfs_s(root->right,res);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int u = 0;
        return dfs_d(data , u);
    }
    TreeNode* dfs_d(string data, int &u){
        if(u == data.size()) return nullptr;
        int k = u;
        while(data[k] != ' ') k++;
        if(data[u] = 'n'){
            u = k + 1;
            return nullptr;
        }
        int sum = 0;
        for(int i = u; i < k; i++){
            sum = sum * 10 + data[i] - '0';
        }
        
        u = k + 1;
        auto root = new TreeNode(sum);
        root->left = dfs_d(data , u);
        root->right = dfs_d(data,u);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

