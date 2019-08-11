/*
 * @lc app=leetcode.cn id=273 lang=cpp
 *
 * [273] 整数转换英文表示
 */
class Solution {
public:
    int hundred = 100, thousand = 1000, million = 1000000, billion = 1000000000;
    unordered_map<int, string> numbers;

    string numberToWords(int num) {
        char number20[][30] = {"Zero", "One", "Two", "Three", "Four", "Five", 
                               "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", 
                               "Twelve", "Thirteen", "Fourteen", "Fifteen", 
                               "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        char number2[][30] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", 
                              "Seventy", "Eighty", "Ninety"};
        for (int i = 0; i < 20; i ++ ) numbers[i] = number20[i];
        for (int i = 20, j = 0; i < 100; i += 10, j ++ ) numbers[i] = number2[j];
        numbers[hundred] = "Hundred", numbers[thousand] = "Thousand";
        numbers[million] = "Million", numbers[billion] = "Billion";
        string res;
        for (int k = 1000000000; k >= 100; k /= 1000)
        {
            if (num >= k)
            {
                res += ' ' + get3(num / k) + ' ' + numbers[k];
                num %= k;
            }
        }
        if (num) res += ' ' + get3(num);
        if (res.empty()) res = ' ' + numbers[0];
        return res.substr(1);
    }

    string get3(int num)
    {
        string res;
        if (num >= hundred)
        {
            res += ' ' + numbers[num / hundred] + ' ' + numbers[hundred];
            num %= hundred;
        }
        if (num)
        {
            if (num < 20) res += ' ' + numbers[num];
            else if (num % 10 == 0) res += ' ' + numbers[num];
            else res += ' ' + numbers[num / 10 * 10] + ' ' + numbers[num % 10];
        }
        return res.substr(1);
    }


};

