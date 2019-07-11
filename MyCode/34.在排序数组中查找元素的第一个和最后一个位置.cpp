/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return vector<int>{-1,-1};
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int mid = (l + r ) >> 1;
            if( target <= nums[mid]) r = mid;
            else l = mid + 1;
            
        }
        if (nums[l] != target)
            return vector<int>{-1, -1};
        int ls = l;
        int le = 0;
        l = 0, r = nums.size() -1;
        while (l < r)
        {
            int mid = (l + r ) >> 1;
            if( target < nums[mid]) r = mid;
            else l = mid + 1;
        }
       
        if(nums[l] > target){
            le = l - 1;
        }else
        {
            le = l;
        }
        
        
        return vector<int>{ls, le};
   
    }
};

