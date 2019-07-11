/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */
class Solution {
    int get(int nums){
        int res = 0;
        while(nums){
            res += nums%10;
            nums /= 10;
        }
        return res;
    }
public:
    int addDigits(int num) {
        if(num/10 == 0)
            return num;
        return addDigits(get(num));
    }
};

