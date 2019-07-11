/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_map<int,int>st;
        for(auto x : nums2) st[x]++;
        for(auto y : nums1){
            if(st[y]){
                res.push_back(y);
                st[y]--;
            }
        }
        return res;
    }
};

