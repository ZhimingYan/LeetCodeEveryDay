/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int res = -1;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                res = nums[i];
                count++;
            }else if(res == nums[i]){
                count++;
            }else
            {
                count--;
            }
           
        }
         return res;
    }
};

