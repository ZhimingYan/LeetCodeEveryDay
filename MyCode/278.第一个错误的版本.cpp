/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        while(l < r){
            int mid =((l + 0ll+r))>>1;
            if(isBadVersion(mid)) r = mid;
            else l = mid+1;
        }
        return l;
    }
};

