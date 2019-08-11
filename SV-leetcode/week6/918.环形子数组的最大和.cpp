/*
 * @lc app=leetcode.cn id=918 lang=cpp
 *
 * [918] 环形子数组的最大和
 */
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int n = A.size(), ans = A[0];

        vector<int> sum(2 * n + 1, 0);
        for (int i = 1; i <= 2 * n; i++) {
            if (i <= n)
                sum[i] = sum[i - 1] + A[i - 1];
            else
                sum[i] = sum[i - 1] + A[i - n - 1];
        }

        deque<int> q;
        q.push_back(0);

        for (int i = 1; i <= 2 * n; i++) {
            while (!q.empty() && i - q.front() > n)
                q.pop_front();

            ans = max(ans, sum[i] - sum[q.front()]);

            while (!q.empty() && sum[i] <= sum[q.back()])
                q.pop_back();

            q.push_back(i);
        }

        return ans;
    }
};

