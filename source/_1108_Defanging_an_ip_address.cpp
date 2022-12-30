#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
      int siz=address.size();
      string ans="";
      for(int i=0;i<siz;i++){
          if(address[i]=='.'){
             ans+="[.]";
          }
          else ans+=address[i];
      }  
      return ans;
    }
};
int main(){
    
    return 0;
}