/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */
class Solution {
    int has(int n ){
        int res = 0;
        while(n){
            int k = n%10;
            if(k)
            res += k*k;
            n=n/10;
        }
        return res;
    }
public:
    bool isHappy(int n) {
        bool rep[1000];
         memset(rep, 0, sizeof(rep));
       int  l = has(n);
       while(!rep[l]){
           rep[l] = true;
           if(l == 1)
                return true;
            l = has(l);
       }
       return false;
    }
};

