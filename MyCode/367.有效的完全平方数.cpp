/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int l =1,r = num;
        while(l < r){
            int mid = (l+1ll+r)/2;
            if(mid <= num/mid ){
                l = mid ;
            }else
            {
                r = mid-1;
            }
            
        }
        if(l*l ==num)
            return true;
        return false;
    }
};

