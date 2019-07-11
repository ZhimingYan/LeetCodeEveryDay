/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_set<int>st;
        for(auto x : nums2) st.insert(x);
        for(auto y : nums1){
            if(st.count(y)){
                res.push_back(y);
                st.erase(y);
            }
        }
        return res;
    }
};

