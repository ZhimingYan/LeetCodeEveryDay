/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp.size() == 3){
                return nums[i];
            }
        }
        return nums[0];
    }
};

