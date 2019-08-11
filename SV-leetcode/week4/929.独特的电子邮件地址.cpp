/*
 * @lc app=leetcode.cn id=929 lang=cpp
 *
 * [929] 独特的电子邮件地址
 */
//#include "head.hpp"
class Solution {
public:
    string realEmails(string str){

        string res ;
        for(int i = 0; i < str.size() ; i++){
            if(str[i] == '.')
                continue;
            else if(str[i] == '+')
                break;
            else 
                res.push_back(str[i]);
        }
        return res;
    }
    int numUniqueEmails(vector<string>& emails) {
        // pair<string,string>p;
         unordered_map<string,int>mp;
        for(auto x : emails){
            int index = x.find_first_of('@');
            string local = realEmails(x.substr(0,index ));
            string yum = x.substr(index + 1);
            string str = local +"@"+ yum;
            mp[str]++;
        }
      
        return mp.size();
    }
};

