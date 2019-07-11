/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if(n ==1)
        return true;
            if(n&1)
                return false;
            n = n>>1;
        return isPowerOfTwo(n);

    }
};

