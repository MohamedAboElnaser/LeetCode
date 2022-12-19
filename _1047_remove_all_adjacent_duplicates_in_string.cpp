#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
     stack <char> sta;
     string ans="";
     for(int i=0;i<s.size();i++){
        if(sta.empty())
            sta.push(s[i]);
        else if(s[i]==sta.top())
        {
            sta.pop();
        }
        else{
            sta.push(s[i]);
        }
     }   
     while(!sta.empty()){
        ans+=sta.top();
        sta.pop();
     }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};
int main (){
       Solution s;
       cout<<s.removeDuplicates("abbaca");  
    return 0;
}