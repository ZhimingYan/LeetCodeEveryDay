/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto x : magazine){
            mp[x]++;
        }
        for(auto y : ransomNote){
            if(mp[y]){
                mp[y]--;
            }else
            {
                return false;
            }
            
        }
        return true;
    }
};

