/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char>ch;
        vector<char>a = {'a','e','i','o','u'};
        for(auto x :a){
            ch.insert(x);
            ch.insert(x-32);
        }
        for(int i = 0,j = s.size()-1;i <j;i++,j--){
            while(i<j&&ch.count(s[i]) == 0 ){
                i++;
            }
            while(i<j&&ch.count(s[j]) == 0){
                j--;
            }
            if(i < j)
                swap(s[i],s[j]);
        }
        return s;
    }
};

