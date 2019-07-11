/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */
class NumArray {
    vector<int>arr;
public:
    NumArray(vector<int>& nums) {
        arr.swap(nums);
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        for(int k = i ;k <= j;k++){
            sum  += arr[k];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

