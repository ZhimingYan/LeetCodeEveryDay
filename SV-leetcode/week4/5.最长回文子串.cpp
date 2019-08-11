/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */
//#include"head.hpp"

class Solution {
public:
   string maxStr = "";
    string longestPalindrome(string s) {
        if(!s.length() || s.length()==1) return s;
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; i-j>=0 && i+j<s.length(); j++){
                if(s[i-j] == s[i+j]){
                    //printf("i-j= %d, i+j= %d\n", i-j, i+j);
                    //printf("i = %d, j = %d\n", i, j);
                    if(j*2+1 > maxStr.length())
                        maxStr = s.substr(i-j, j*2+1);
                }
                else break;

            }
            for(int j = 0; i-j>=0 && i+1+j<s.length(); j++){
                if(s[i] == s[i+1] && s[i-j] == s[i+1+j]){
                    if (j*2+2 > maxStr.length())
                        maxStr = s.substr(i-j, j*2+2);
                }
                else break;

            }
        }
        return maxStr;
    }
};

