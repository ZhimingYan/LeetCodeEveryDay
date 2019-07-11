/*
 * @lc app=leetcode.cn id=443 lang=cpp
 *
 * [443] 压缩字符串
 */
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>res;
        for(int i = 0 , j = 0; i < chars.size()&& j < chars.size();){
            res.push_back(chars[i]);
            while(chars[j] == chars[i]&& j < chars.size()) j++;
            if(i != j){
                res.push_back('0' + (j-i));
                i = j;
            }else{
                i++;j++;
            }
        }
        return res.size();
    }
};

