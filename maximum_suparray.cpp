#include <bits/stdc++.h>
///             not an easy problem :)
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0;
        int maxsum=nums[0];
         
        for(int i=0;i<nums.size();i++) {
           if(currentSum<0)
            currentSum=0;
            currentSum+=nums[i]; 
          maxsum=max(maxsum,currentSum);
        } 
        return maxsum;
    }
};
int main(){
    Solution s;
    vector<int>nums{5,4,-1,7,8};

   cout<< s.maxSubArray(nums);
    return 0;
}