/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 1; i <= s.length()/2; i++){
            if(s .substr(0,i) == s.substr(i,i) ){
                string tmp = s.substr(0,i);
                int j = i;
                if(s.size() % i != 0) continue;
                for(; j <= s.size() - i ;){    
                    if(s.substr(j,i) != tmp) break;
                    j +=i;
                }
                if(j == (s.size()))
                    return true;
            }
        }
        return false;
    }
};

