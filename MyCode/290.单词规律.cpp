/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        //if(pattern.size() != str.size()) return false;
        vector<string>str1;
        stringstream raw(str);
        string line;
        while (raw >> line) str1.push_back(line);
        if(pattern.size() != str1.size()) return false;
        unordered_map<char,int>hash1;
        unordered_map<string,int>hash2;
        for(auto x : pattern){
            hash1[x]++;
        }
        for(auto x : str1){
            hash2[x]++;
        }
        for(int i = 0 ; i < str1.size();i++){
            if(hash1[pattern[i]] != hash2[str1[i]])
                return false;
        }
        return true;
    }
};

