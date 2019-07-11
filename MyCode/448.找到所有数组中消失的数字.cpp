/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        //int count = 0;
        for(int i = 0; i < n; i++){
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0)
                nums[index] = - nums[index];
        }
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                res.push_back(i+1);
            }
        }
        
        return res;

    }

};

