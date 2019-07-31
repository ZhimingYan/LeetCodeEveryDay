/*
 * @lc app=leetcode.cn id=173 lang=cpp
 *
 * [173] 二叉搜索树迭代器
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

class BSTIterator {
    stack<TreeNode*>s;
public:
    BSTIterator(TreeNode* root) {
        TreeNode *p = root;
        while (p)
        {
            s.push(p);
            p = p->left;
        }
        
        
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode *cur = s.top();
        s.pop();
        int v = cur->val;
        cur = cur -> right;
        while (cur)
        {
            s.push(cur);
            cur = cur -> left;
        }
        return v;
        
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !s.empty();

    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

