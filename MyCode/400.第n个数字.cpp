/*
 * @lc app=leetcode.cn id=400 lang=cpp
 *
 * [400] 第N个数字
 */
class Solution {
public:
    int findNthDigit(int n) {
        if(n < 10 ) return n;
        int m = 0;
        int i = 0;
        for( ; i < n;i++){
            m += get(i);
            if(m >= n) break;
        }
        int l = n -get(i-1);
         string s = to_string(i-1);
        //for(int j = 0; j < l;j++);
        return (int)s[l-1];
    }
    int get(int n){
        if(n == 0)
            return 1;
        int res = 0;
        while(n){
            n /=10;
            res++;
        }
        return res;
    }
};

