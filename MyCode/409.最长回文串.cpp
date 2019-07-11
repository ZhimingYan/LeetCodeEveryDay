/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */
class Solution {
    bool isPalindrome(string s){
        for(int i = 0 , j = s.size() - 1; i< j; i++,j--){
            if(s[i] != s[j]) return false;
        }
        return true;
    }
public:
      int longestPalindrome(string s) {
          unordered_map<int,int>mp;
          for(auto x : s){
              mp[x]++;
          }
          int res = 0;
          bool flag = false;
         for(auto x : mp){
              if(x.second>0&& x.second%2 == 0){
                  res +=x.second;
              }
              if(x.second>0&& x.second%2 == 1)
               { res += (x.second-1);
                    flag = true;
               }
          

          }
               if(flag){
                   res++;
               }
        return res;
    }
};

