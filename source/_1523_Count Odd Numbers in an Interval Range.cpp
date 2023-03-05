#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
      if((low&1)&&(high&1))return ((high-low)/2)+1;
      if((low&1)&& !(high&1)){
         if(high-low==1)return 1;
         else
         return  ceil( ((high-low+1)/2));
      }
      if(!(low&1)&& (high&1))  return  ceil( ((high-low+1)/2));
      return (high-low)/2;
    }
};
int main(){
      
     
    return 0;

}