#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      string ans="";
      int siz1=word1.size(),siz2=word2.size();
      int i=0,j=0;
 
      while(i<siz1 || j<siz2){
          if(i<siz1){
              ans+=word1[i++];
          }
          if(j<siz2)
          ans+=word2[j++];
      } 
      return ans;
    }
};
int main(){
            

    return 0;

}