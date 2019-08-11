/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */
//#include "head.hpp"
class Solution {
public:
    vector<string> letterCombinations(string digits) {
       if(digits.empty()) return vector<string>();
       string ch[] =  {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
       vector<string> res;
       res.push_back("");
       for(int i = 0 ; i < digits.size(); i++){
           vector<string> newRes;
           int num = digits[i] - '0';
           for(int j = 0 ; j < res.size(); j++)
                for(int k = 0 ; k < ch[num].size(); k++){
                    newRes.push_back(res[j] +ch[num][k]);
                }

            res = newRes;
       }
       return  res;
    }
};

