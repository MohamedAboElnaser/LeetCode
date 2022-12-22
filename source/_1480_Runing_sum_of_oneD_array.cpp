#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     vector<int>ans;
     int siz=nums.size();// to save the time of function calls:)
     for(int i=0;i<siz;i++){
         if(i==0)
            ans.push_back(nums[0]);
        else{
            ans.push_back(ans[i-1]+nums[i]);
        }
     } 
     return ans;  
    }
};
int main(){
    vector<int > nums{1,2,3,4};
    vector<int>ans;
    Solution s;
    ans=s.runningSum(nums);
    for(auto i: ans) cout<<i<<" ";
    return 0;
}