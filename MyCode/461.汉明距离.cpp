/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */
class Solution {
public:
    int hammingDistance(int x, int y) {
        int res  = 0;
        int z = x^y;
        while(z){
            if(z&1) res++;
            z = z>>1;
        }
        return res;

    }
};

