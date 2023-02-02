#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        if(nums.size()==0)return (vector<int>){-1,-1};
        ans.push_back(start_index(nums,target));
        ans.push_back(end_index(nums,target));
        return ans;
    }
    int start_index(vector<int>&nums,int target){
        int l=0,r=nums.size()-1,res=-1,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                res=mid;
                r=mid-1;
            }
            else if(nums[mid]>target)
                r=mid-1;
            
            else
                l=mid+1;
        }
        return res;
    }
    int end_index(vector<int>&nums,int target){
      int l=0,r=nums.size()-1,res=-1,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                res=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
                r=mid-1;
            
            else
                l=mid+1;
        }
        return res;
    }
};
int main(){
    Solution s; 
    vector<int>nums{};
     vector<int>ans=s.searchRange(nums,0);
     for(auto &i: ans)cout<<i<<" ";
    return 0;

}