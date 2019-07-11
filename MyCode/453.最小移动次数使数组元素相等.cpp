/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */
class Solution {
public:
    int minMoves(vector<int>& nums) {
        long sum = 0;
         //return accumulate(nums.begin(), nums.end(), 0) - nums.size() 
        for(auto x : nums){
            sum += x;
        }
        return (int)(sum -nums.size()* *min_element(nums.begin(), nums.end())*1ll);
    }
};

