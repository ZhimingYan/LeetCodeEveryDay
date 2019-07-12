/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */
#include<vector>
#include<iostream>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) return -1;
        int n = nums.size() - 1;
       
        //while (n > 0 && nums[n ] == nums[0]) n--;
         int l = 0; 
        int r = n ; 
        int pid = 0;
        //if(nums[n] >= nums[0]) 
        while (l < r)
        {
            int mid = l + r  >> 1;
            if(nums[mid]  < nums[0]) r = mid;
            else l = mid + 1;
        }
        std::cout << "bab" << l << endl;
        pid = l ;
        if( nums[0] > target){ 
            l =  pid;
            r = n;
            while( l < r){
            int mid2 = (r + l + 1) >> 1;
            if( nums[mid2] < target ) l = mid2;
            else r = mid2 - 1; 
            }
            if(nums[l] == target) return l;
            else return -1;
        }else{
            r = pid - 1;
            l = 0; 
            while( l < r){
                int mid3 = l + r + 1>> 1;
                if( target > nums[mid3]) l = mid3;
                else r = mid3 - 1;
            }
            if(nums[l] == target ) return l;
            else return -1;
        }
        return -1; 
    }
};

