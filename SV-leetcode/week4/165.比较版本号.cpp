/*
 * @lc app=leetcode.cn id=165 lang=cpp
 *
 * [165] 比较版本号
 */
//#include "head.hpp"
class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1,v2;
        version1.push_back('.');
        version2.push_back('.');

        for(int i = 0 , j = 0; i <= j && j < version1.size();){
            if(version1[j] == '.'){
               // while(version1[i] == '0')i++;
                v1.push_back(atoi(version1.substr(i,j - i).c_str()));
                i = j + 1; 
            }
            j++;
        }
        for(int i = 0 , j = 0; i <= j && j < version2.size();){
            if(version2[j] == '.'){
              //  while(version2[i] == '0')i++;
                v2.push_back(atoi(version2.substr(i,j - i).c_str()));
                i = j + 1; 
            }
            j++;
        }

        int i ;
        for(i = 0 ; i < v1.size()&& i < v2.size();i++){
            if(v1[i] < v2[i] )
                return -1;
            if(v1[i] > v2[i] )
                return 1;
            
        }
        if(v1.size() == v2.size()) return 0;
    
        if(i == v1.size() && v2[v2.size() - 1] != 0) return -1;
        if(i == v2.size() && v1[v1.size() - 1] != 0) return 1;
        // if(v1[v1.size() - 1] == 0) 
        // if(v1 < v2) return -1;
        // if(v2 < v1) return 1;

        return 0;
        
    }
};
