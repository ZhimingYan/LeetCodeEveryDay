/*
 * @lc app=leetcode.cn id=447 lang=cpp
 *
 * [447] 回旋镖的数量
 */
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res = 0;
        unordered_map<int,int> um;
        for(int i = 0; i < points.size(); i++){
            for(int j = 0; j < points.size(); j++){
                if( i == j)
                    continue;
                auto x = points[i][0] - points[j][0];
                auto y = points[i][1] - points[j][1];
                um[x*x + y*y]++; 
            }
            for(auto x : um){
                res += x.second * (x.second - 1);//如果等于0 则说明是一个不好的开始
            }
            um.clear();
        }
        return res;
    }
};

