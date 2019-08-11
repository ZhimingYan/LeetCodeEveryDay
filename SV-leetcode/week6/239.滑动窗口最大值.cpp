/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */
//#include "head.hpp"
class Solution {
    deque<int> q;
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            while (q.size() && i - q.front() >= k) q.pop_front();//维护队列头部是否需要出列
            while (q.size() && nums[q.back()] < nums[i]) q.pop_back();//维护单调队列只让nums[q.back()] >= nums[i]入队
            q.push_back(i);// nums[q.back()] > nums[i]；
             if(i >= k -1) res.push_back(nums[q.front()]);//在窗口等于k时才取值
        }
        return res;

    }
};

