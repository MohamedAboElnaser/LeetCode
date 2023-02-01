#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
   bool isStrictlyPalindromic(int n) {
         for(int i=2;i<=(n-2);i++ )
            if(!is_palin(represnt(n,i)))return false;
         
         return true;
   }
   vector<int> represnt(int n,int base){
      vector<int>ans;
      while(n){
         ans.push_back(n%base);
         n/=base;
      }return ans;
   }
   bool is_palin(vector<int>num){
      int siz=num.size();
      for(int i=0;i<(siz+1)/2;i++)
         if(num[i]!=num[siz-1-i])return false;
      return true;
   }
}; 
int main(){
     Solution s;
     cout<<s.isStrictlyPalindromic(4);

    return 0;

}