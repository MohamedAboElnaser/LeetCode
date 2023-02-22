#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
     int   minweight=-1,maxweight=0;
        for(int  i: weights){
            maxweight+=i;
            minweight=max(minweight,i);
        }
        int ans=0,mid;
        while(minweight<=maxweight){
           mid=minweight+(maxweight-minweight)/2;
           if(is_good_capacity(weights,mid,days)){
               ans=mid;
               maxweight=mid-1;
           }
           else 
            minweight=mid+1; 
        }
        return ans;
    }
    
    bool is_good_capacity(vector<int>&weig,int total_capacity,int days){
        int d=1,temp=0;
        for(int i=0;i<weig.size();i++){
            if(temp+weig[i]<=total_capacity){
                    temp+=weig[i];
            }else{
                d++;
                temp=weig[i];
            }
        }
        if(d<=days)return true;
        else return false;
    }
};
int main(){
      
     
    return 0;

}