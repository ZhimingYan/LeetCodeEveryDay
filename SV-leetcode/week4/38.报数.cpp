/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 报数
 */
//#include "head.hpp"
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i = 2; i <= n; i++){
            string gen = "";
            int count = 0;
            for(int j = 0; j < s.size(); j++){
                count++;
                if(j == s.size() - 1 || s[j] != s[j+1]){
                    gen += to_string(count) + s[j];
                    count = 0;
                }
            }
            s = gen;
        }
        return s;
    }
};

