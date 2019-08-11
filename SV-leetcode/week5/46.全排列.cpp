/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */
//#include "head.hpp"
class Solution {
    vector<vector<int>> res;
    vector<bool>st;
    vector<int> path;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        for(int i = 0; i < nums.size() ; i++ ) st.push_back(false);
        dfs(nums, 0);
        return res;
    }
    void dfs(vector<int> &num, int u){
        if( u == num.size()){
            res.push_back(path);
	    return;
        }
        for(int i = 0 ; i < num.size(); i++ ){
            if(!st[i])
            {
                st[i] = true;
                path.push_back(num[i]);
                 dfs(num,u+1);
                path.pop_back();
                st[i] = false;
            }
         
        }
    }
};

