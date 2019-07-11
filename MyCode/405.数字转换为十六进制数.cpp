/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */
class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string ans = "";
        unsigned int n = (unsigned int)(num);
        while (n != 0)
        {
            int temp = n % 16;
            n = n / 16;
            if (temp < 10) ans = to_string(temp) + ans;
            else ans = (char)('a' + temp - 10) + ans;
        }
        return ans;
    }
};

