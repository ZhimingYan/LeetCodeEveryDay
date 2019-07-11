/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto x : nums){
            sum += x;
        }
        int sum2 = nums.size()*(nums.size()+1)/2;
        return sum2-sum;
    }
};

