#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int count = 0;
        
        return res;

    }

};
int main(){
   vector<int>nums = {4,3,2,7,8,2,3,1};
    Solution p;
    vector<int> res = p.findDisappearedNumbers(nums) ;
    //int  res = p.compress(chars);
    cout << endl;
    for(auto x : res)
        cout << x << " ";
    
    getchar();

    return 0;
}