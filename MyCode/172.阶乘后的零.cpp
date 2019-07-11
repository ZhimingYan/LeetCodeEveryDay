/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */
class Solution {
public:
    int trailingZeroes(int n) {
        return n < 5? 0 : n/5 +trailingZeroes(n/5);
    }
};

