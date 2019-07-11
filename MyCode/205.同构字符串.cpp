/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st, ts;
        if (s.size() != t.size()) return false;
        for (int i = 0; i < s.size(); i ++ )
        {
            if (st.count(s[i]))
            {
                if (st[s[i]] != t[i]) return false;
            }
            else st[s[i]] = t[i];

            if (ts.count(t[i]))
            {
                if (ts[t[i]] != s[i]) return false;
            }
            else ts[t[i]] = s[i];
        }
        return true;
    }
};


