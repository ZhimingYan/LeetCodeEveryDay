/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] 寻找重复数
 */
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n = nums.size() - 1;
    //  int sum1 = 0;
    //  int sum2 = 0;
    //  for( auto x : nums){
    //      sum1 ^= x;//重复数值中的单个数用疑惑
    //      sum2 += x;
    //  }
    //  std::cout << sum1 << endl;   
    //  return (sum2 - sum1 ) /2;
    int l = 1; int r = n;
    while (l < r)
    {
        int mid = r + l  >> 1;
        int count = 0;
        for(auto x : nums){
            if(x <= mid)
                count++;
        } 
        if(count > mid) r = mid ;
        else l = mid + 1;

    }
    return l;
    
    
    }
};

