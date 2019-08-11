#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;
   void Reverse(string &s, int i, int j){
        while (i < j)
        {
            swap(s[i++],s[j--]);
        }        
    }

  string reverseWords(string s) {
        string res = "";
        int start = 0;
        while (s[start] == ' ' && start < s.size()) start++;
        int end = s.size() - 1;
        while (s[end] == ' ' && end >= 0) end--;
        string str = "";
        for(int i = start; i <= end; ){
            if(s[i] != ' ')
                str.push_back(s[i++]);
            else{
                str.push_back(' ');
                while (s[i] == ' ') i++;
            }
        }
        //std::cout << str << std::endl;
        Reverse(str,0,str.size() - 1);
        // std::cout << str << std::endl;
       
        str.push_back(' ');
         std::cout << str << std::endl;
        for(int i = 0, j = 0; i <= j && j < str.size();){
            if(str[j] == ' '){
                Reverse(str,i,j - 1);
                std::cout << str << std::endl;
                    i = j + 1;
                   // j++;
            }
            j++;    
        }
        
        return str.substr(0,str.size() - 1);
        
    } 
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
              //  whileunordered_set(version2[i] == '0')i++;
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
    
        if(i == v1.size() && v2[i] != 0) return 1;
        if(i == v2.size() && v1[i] != 0) return -1;
        // if(v1[v1.size() - 1] == 0) 
        // if(v1 < v2) return -1;
        // if(v2 < v1) return 1;

        return 0;
        
    }
// class Solution1 {
// public:

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

int main(){
    vector<string> s = {"test.email+alex@leetcode.com","test.email.leet+alex@code.com"};
   
   int res = numUniqueEmails(s);



   cout << res << endl;
    return 0;
}