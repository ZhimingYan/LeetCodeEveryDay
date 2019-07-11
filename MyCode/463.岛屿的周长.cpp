/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        if(!n) return 0;
        int m = grid[0].size();
        if(!m) return 0;
        int count = 0;
        int s = 0;
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0, -1,0,1};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]){
                    count++;
                    for(int k = 0; k < 4; k++){
                        int x = i + dx[k],y = j +dy[k];
                        if(x >= 0&& x < n&& y >=0&& y < m &&grid[x][y] ==1)
                            s++;
                    }
                }

            }
        }
        return 4*count - s;
     }
};

