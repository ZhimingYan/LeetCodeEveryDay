/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    int pathSum(TreeNode* root, int sum) {
        int res = 0;
        if(!root) return res;
        res += find(root,sum);
        res += pathSum(root->left,sum);
        res += pathSum(root->right, sum);
        return res;
    }

    int find(TreeNode* root, int sum){
         int res2 = 0;
        if(!root) return res2;
        //int res = 0;
        if(sum == root->val){
            res2++;
        }

        res2  += find(root->left , sum - root->val);
        res2 += find(root->right , sum - root->val);
        return res2;
    }
};

