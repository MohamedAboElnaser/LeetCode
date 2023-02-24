#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
       int min_value=INT_MAX;
       priority_queue<int>pq;
       for(int i=0;i<nums.size();i++){
           if((nums[i]&1)) nums[i]*=2;
        
        min_value=min(min_value,nums[i]);
        pq.push(nums[i]);
       }
        int ans=pq.top()-min_value;

        while(!(pq.top()&1)){
           int top=pq.top();
           pq.pop();
           ans=min(ans,top-min_value);
           top/=2;
           min_value=min(top,min_value);
           pq.push(top);
       }
       return min(ans,pq.top()-min_value);
    }
};

int main(){
      
     
    return 0;

}