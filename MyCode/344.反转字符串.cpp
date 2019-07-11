/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty()) return;
        for(int i = 0, j = s.size() -1;i < j;i++,j--){
            swap(s[i],s[j]);
        }
    }
};

