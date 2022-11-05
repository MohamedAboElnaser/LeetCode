#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
     int siz=s.size();
      for(int i=0;i<siz;i++){
         if(s[i]!=t[i])
            return t[i];
      }  
      return t[siz];
    }
};
int main(){
    Solution s;
    cout<<s.findTheDifference("","a");
    return 0;
}