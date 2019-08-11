/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */
//#include "head.hpp"
class Solution {
    string s;
public:
    bool exist(vector<vector<char>>& board, string word) {
        s = word;
        if(board.size() == 0) return false;
        if(board[0].size() == 0) return false;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if( dfs(board, i, j, 0))
                 return true;
            }
        }
        return false;

    }

    bool dfs(vector<vector<char>>&d, int i , int j ,int u){
            if(d[i][j] != s[u])
            return false;
        if(u == s.size() - 1)
            return true;
    
   int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
        char t = d[i][j];
        d[i][j] = '*';
        for(int k = 0 ; k < 4; k ++){
            int x = i + dx[k], y = j + dy[k];
            if(x >= 0 && x < d.size() && y >= 0 && y < d[0].size() && d[x][y] != '*')
                if(dfs(d,x,y,u+1))
                    return true;

        }
        d[i][j] = t;
        return false;
    }

};

 