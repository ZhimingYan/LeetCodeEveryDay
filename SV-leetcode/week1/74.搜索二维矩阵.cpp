/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int  n = matrix.size();
        if( n == 0) return false;
        int m = matrix[0].size();
        if( m == 0) return false;
        for( int i = 0 , j = m - 1 ; i < n && j >= 0;){
            if( target == matrix[i][j])
                return true;
            else if(target > matrix[i][j]){
                i++;
            }else
            {
                j--;
            }
        

        }
        return false;

    }
};

