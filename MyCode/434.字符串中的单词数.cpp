/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string str;
        int res = 0;
        while(ss >> str) res++;
        return res;
    }
};

