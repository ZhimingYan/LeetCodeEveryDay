/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */
#include<vector>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) return -1;
        int l = 0; 
        int r = nums.size() - 1; 
        while (l < r&&nums[l] == nums[l+1])l++;
        while (r > l && nums[r] == nums[r-1])r--;
        
        while (l < r)
        {
            int mid = l + r >> 1;
            if(nums[mid] )


        }
        
    }
};

