#include <bits/stdc++.h>
using namespace std;

  
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int>change;
        for(auto &i: bills){
            if(i==5){
                change[5]++;
            }
            else if(i==10){
                if(change[5]>0){
                    change[5]--;
                    change[10]++;
                }
                else return false;
            }
            else if(i==20){
                 if(change[10]>0){
                     change[10]--;
                     if(change[5]>0){
                        change[5]--;
                        continue;
                     }
                    else  return false;
                 }
                 else {
                     if(change[5]>=3){
                         change[5]--;change[5]--;change[5]--;
                     }
                     else return false;
                 }
            }
        }
         
        return true;
    }
};

int main(){
      
     
    return 0;

}