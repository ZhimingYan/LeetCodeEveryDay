/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */
//#include "head.hpp"

//这题要重点学习，动态规划问题
/*
动态规划四步走
1.确认原问题与子问题: 原问题为求s中最长有效括号，子问题可拆解为前i个中最长有效括号。
2.确认状态: 本题的动态规划状态单一，第i个状态即为前i个字符串中最长括号数。
3.确认边界状态的值: dp[1]=0，从1开始
4.确定状态转移方程: 对于(())适用dp[i] = dp[i - 1] + 2;对于()()适用 dp[i] += dp[i - dp[i]];
两者结合一起判断，防止()()(())这种情况
*/
class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size() == 0) return 0;
        int maxL = 0;
        vector<int> dp(s.size(),0);
        for(int i = 1; i < s.size(); i++){
            if(s[i] == ')'){
                if(i - dp[i-1] - 1 >= 0 && s[i-dp[i - 1] -1] == '(')
                    dp[i] = dp[i - 1] + 2;
                if(i - dp[i] >=0 && dp[i - dp[i]] > 0)
                    dp[i] += dp[i-dp[i]];
            }
            maxL = max(dp[i], maxL);
        }
        return maxL;
    }
};

