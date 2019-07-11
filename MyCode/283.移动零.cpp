/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
            if (nums[j] != 0)
                nums[i++] = nums[j];
        for (; i < nums.size(); i++)
            nums[i] = 0;
    }
};

