/*
 * @lc app=leetcode.cn id=52 lang=cpp
 *
 * [52] N皇后 II
 */
class Solution {
public:
    
    int ans = 0, n;
    vector<bool> col, d, ud;
    
    int totalNQueens(int _n) {
        n = _n;
        col = vector<bool>(n);
        d = ud = vector<bool> (n * 2);
        dfs(0);
        
        return ans;
    }
    
    void dfs(int u)
    {
        if (u == n)
        {
            ans ++ ;
            return;
        }
        
        for (int i = 0; i < n; i ++ )
            if (!col[i] && !d[u + i] && !ud[u - i + n])
            {
                col[i] = d[u + i] = ud[u - i + n] = true;
                dfs(u + 1);
                col[i] = d[u + i] = ud[u - i + n] = false;
            }
    }
};

