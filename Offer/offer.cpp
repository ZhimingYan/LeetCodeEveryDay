#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<utility>

using namespace std;
//60.礼物的最大值
class Solution60 {
public:
    int getMaxValue(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>f(n+1,vector<int>(m+1));
        for(int i = 1; i <= n; i ++){
            for(int j = 1; j <= m; j++){
                f[i][j] = max(f[i-1][j],f[i][j-1]) + grid[i -1 ][j - 1];
            }
        }
        return f[n][m];
    }
};
//61.最长不含重复字符的子字符串
class Solution61 {
public:
    int longestSubstringWithoutDuplication(string s) {
        unordered_map<char,int>mp;
        int res = 0;
        int  i = 0 ;
        int j = 0;
        while (j < s.size())
        {
            if(++mp[s[j]] > 1){
            while(mp[s[i]] == 1) mp[s[i++]]--;//解决连续两个黏在一起，则需要重新开始
               mp[s[i++]]--;
            }
            res = max(res,j - i + 1);
            j++;
        }
        return res;
        
    }
};