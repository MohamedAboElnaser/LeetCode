#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>m;

       for(int i=0;i<strs.size();i++){
           string s=strs[i];
           sort(s.begin(),s.end());
           m[s].push_back(strs[i]);
       } 
       vector<vector<string>>ans;
       for(auto temp:m){
           ans.push_back(temp.second);
       }
       return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}