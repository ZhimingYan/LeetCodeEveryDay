/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */
///为什么会超时呢
//扎心了
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.empty() || p.size() > s.size()) return res;
        sort(p.begin(),p.end());
        for(int i = 0 ; i < s.size() - p.size()+1;i++){
            string a = s.substr(i,p.size());
            sort(a.begin(),a.end());
            if(a == p)
                res.push_back(i);
        }
        return res;
    }
};

