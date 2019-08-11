/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */
class Solution {
public:
    
    vector<vector<int>> ans;
    vector<int> path;
    
    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(k, 1, n);
        return ans;
    }
    
    void dfs(int k, int start, int n)
    {
        if (!k)
        {
            if (!n) ans.push_back(path);
            return;
        }
        // 9 - k + 1 >=i 要保证能取到九个数
        for (int i = start; i <= 10 - k ; i ++ )
        {
            path.push_back(i);
            dfs(k - 1, i + 1, n - i);
            path.pop_back();
        }
    }
};

