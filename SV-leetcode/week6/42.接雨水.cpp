/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */
class Solution{
public:
    int trap(vector<int>& height){
        int left = 0,right = height.size() - 1,water = 0,minHeight = 0;
        while(left < right){
            while(left < right && height[left] <= minHeight)
                water += minHeight - height[left++];
            while(left < right && height[right] <= minHeight)
                water += minHeight - height[right--];
            minHeight = min(height[left],height[right]);
        }
        return water;
    }
};

