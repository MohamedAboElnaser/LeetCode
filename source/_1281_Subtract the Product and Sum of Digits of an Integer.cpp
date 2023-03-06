#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        pair<int,int>ans=calc(n);
        return ans.first-ans.second;  
    }
    pair<int,int> calc(int n){
        int sum=0,prod=1;

        while(n){
             sum+=n%10;
             prod*=n%10;
             n/=10;
        }
        return make_pair( prod,sum);
    }
     
};
int main(){
      
     
    return 0;

}