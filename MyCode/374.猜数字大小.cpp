/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
          
        int low = 1;
        int high = n;
        
        
        while(true){
            
            int mid = (low+0ll+high)/2;
            
            int result = guess(mid);
            
            //他的数字比较小，就是我猜的大了
            if(result==-1){
                high = mid-1;
            }else if(result == 1){
                low = mid+1;
            }else{
                return mid;
            }
            
        }
    }

};

