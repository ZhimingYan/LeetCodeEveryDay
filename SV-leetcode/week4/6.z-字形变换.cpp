/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

/*
对于第一行和最后一行，是公差为 2(n−1)2(n−1) 的等差数列，首项是 00 和 n−1n−1；
对于第 ii 行 (0<i<n−1)(0<i<n−1) ，是两个公差为 2(n−1)2(n−1) 的等差数列交替排列，首项分别是 ii 和 2n−i−22n−i−2；
*/
class Solution {
public:
    string convert(string s, int numRows) {
        string res;
        if (numRows == 1) return s;
        for (int j = 0; j < numRows; j ++ )
        {
            if (j == 0 || j == numRows - 1)
            {
                for (int i = j; i < s.size(); i += (numRows-1) * 2)
                    res += s[i];
            }
            else
            {
                for (int k = j, i = numRows * 2 - 1 - j - 1;
                        i < s.size() || k < s.size();
                        i += (numRows - 1) * 2, k += (numRows - 1) * 2)
                {
                    if (k < s.size()) res += s[k];
                    if (i < s.size()) res += s[i];
                }
            }
        }
        return res;
    }

};

