/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */
class Solution {
public:
    int mySqrt(int x) {
        if( x == 0) return  0;
        int l = 1, r = x;
        while(l < r){   
            int mid = (l+0ll+r + 1 )>>1;
            if(mid <= x / mid) l = mid;
            else r = mid -1 ;
        }
        return l;
    }
};

