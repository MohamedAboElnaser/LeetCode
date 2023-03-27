#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
         int ans=0;
         for(int i=0;i<nums1.size();i++){
             int l=i,r=nums2.size()-1,mid;
             while(l<=r){
                 mid=l+(r-l)/2;
                 if(nums1[i]>nums2[mid]){
                         r=mid-1;
                 }else{
                    l=mid+1;
                 }
             }
             ans=max(ans,l-i-1);

         }
         return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}