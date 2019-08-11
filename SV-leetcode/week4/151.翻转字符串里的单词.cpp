/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */
//#include"head.hpp"
class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int start = 0;
        while (s[start] == ' ' && start < s.size()) start++;
        int end = s.size() - 1;
        while (s[end] == ' ' && end >= 0) end--;
        string str = "";
        for(int i = start; i <= end; ){
            if(s[i] != ' ')
                str.push_back(s[i++]);
            else{
                str.push_back(' ');
                while (s[i] == ' ') i++;
            }
        }
        //std::cout << str << std::endl;
        reverse(str,0,str.size() - 1);
        // std::cout << str << std::endl;
       
        str.push_back(' ');
        for(int i = 0, j = 0; i <= j && j < str.size();){
            if(str[j] == ' '){
                reverse(str,i,j - 1);

                    i = j + 1;
                   // j++;
            }
            j++;    
        }
        
        return str.substr(0,str.size() - 1);
        
    } 
    void reverse(string &s, int i, int j){
        while (i < j)
        {
            swap(s[i++],s[j--]);
        }        
    }
};

