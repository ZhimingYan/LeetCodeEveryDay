/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
//#include "head.hpp"
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i = 0; 
        int j = 0;
        int res = 0;
        while (j < s.size()){
            if(++mp[s[j]] > 1){
                while (mp[s[i]] == 1) mp[s[i++]]--;
                mp[s[i++]]--;
            }
            res = max(res, j - i + 1);
            j++;
        }
        return res;

    }
};

