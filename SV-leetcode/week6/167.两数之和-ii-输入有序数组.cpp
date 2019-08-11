/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */
//#include "head.hpp"
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j)
        {
            /* code */
            int sum = numbers[i] + numbers[j];
            if( sum == target)
                return {i+1, j+1};
            if(sum < target)
                i++;
            else
            {
                j--;
            }
            
        }
        return {0,0};
        
    }
};

