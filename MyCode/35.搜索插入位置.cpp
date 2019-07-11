/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l =  0, r = nums.size() - 1;
        while (l < r)
        {
            /* code */
            int mid = l + r  >> 1;
            if( target <= nums[mid]) r = mid;
            else l = mid + 1;
        }
        if(target == nums[l]|| target < nums[l]){
            return l;
        }else
        {
            return l + 1;
        }  
    }
};

