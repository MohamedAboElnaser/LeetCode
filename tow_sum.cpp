#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>ans;
      int sz=nums.size();
      for(int i=0;i<sz-1;i++){
        for(int j=i+1;j<sz;j++)
            if((nums[i]+nums[j])==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
      }  
      return ans;
    }
};
int main(){
    vector<int>nums{3,3};
    Solution s;
    vector<int>ans=s.twoSum(nums,6);
    for(auto i: ans)cout<<i<<" ";
    return 0;
}