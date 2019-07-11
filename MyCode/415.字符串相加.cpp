/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */
class Solution {
    int ctoi(char a){
        return a - '0';
    }
public:
    string addStrings(string num1, string num2) {
        string str = "";
        if(num1.size() < num2.size()) 
        swap(num1,num2);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n = num1.size(),m = num2.size();
        int p = 0;
        for(int i = 0; i < m ; i++ ){
            int tmp = ctoi(num2[i]) + ctoi(num1[i]) + p;
            if(tmp >= 10){
                str += to_string(tmp%10);
                p = 1;
            }else{
                str += to_string(tmp);
                p = 0;
            }
        }
        for(int i = m; i < n; i++){
            int tmp = ctoi(num1[i])+p;
            if(tmp >= 10){
                str += to_string(tmp%10);
                p = 1;
            }else{
                str += to_string(tmp);
                p = 0;
            }
        }
        if(p==1)
        str += to_string(1);
        reverse(str.begin(),str.end());
        return str;
    }
};

