/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
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
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(0, nums.size() - 1,nums);
    }
    TreeNode* build(int l , int r ,vector<int>&nums){
        if(l > r) return 0;
        int mid = (r+l)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = build(l, mid-1,nums);
        root->right = build(mid + 1,r,nums);
        return root;
    }
};

