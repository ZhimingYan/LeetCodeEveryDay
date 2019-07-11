/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <=0 ) return false;
        if(n ==1) return true;
        if(n%4) return false;
        return isPowerOfFour(n/4);
    }
};

