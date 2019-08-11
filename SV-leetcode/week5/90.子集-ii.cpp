/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */
class Solution {
public:
    
    vector<vector<int>> ans;
    vector<int> path;
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        dfs(nums, 0);
        return ans;
    }
    
    void dfs(vector<int>& nums, int u)
    {
        if (u == nums.size())
        {
            ans.push_back(path);
            return;
        }
        
        // 计算当前数字的个数
        int k = 0;
        while (u + k < nums.size() && nums[u + k] == nums[u]) k ++ ;
        
        for (int i = 0; i <= k; i ++ )
        {
            dfs(nums, u + k);
            path.push_back(nums[u]);
        }
        
        // 恢复现场
        for (int i = 0; i <= k; i ++ ) path.pop_back();
    }
};


