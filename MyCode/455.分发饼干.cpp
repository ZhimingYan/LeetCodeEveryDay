/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(), s.end());
        int n = g.size();
        int m = s.size();
        int i = n-1, j = m - 1;
        int res = 0;
        for( ; i >=0&&j >=0; ){
            if(s[j] < g[i]) i--;
            else
            {
                j--;
                i--;
                res++;
            }
            
        }
        return res;
    }
};

