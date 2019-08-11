/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */
//#include"head.hpp"
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        vector<vector<string>>res;
        for(auto &x : strs){
            string k = x;
            sort(k.begin(),k.end());
            mp[k].push_back(x);
        }
        for(auto &h : mp){
            res.push_back(h.second);
        }
        return res;
    }
};

