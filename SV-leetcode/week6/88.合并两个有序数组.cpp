/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
//#include "head.hpp"
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m+n);
        int k = m+n-1;
        int i, j;
        for(i = m-1, j = n - 1; i >=0&& j >= 0;){
            if(nums1[i] < nums2[j])
                nums1[k--] = nums2[j--];
            else
                nums1[k--] = nums1[i--];
        }
        while(i  == 0 && j >= 0) nums1[k--] = nums2[j--] ;
        while(j  == 0 && i >= 0) nums1[k--] = nums1[i--] ;

    }
};

