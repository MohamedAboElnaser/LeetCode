#include <bits/stdc++.h>
using namespace std;
 class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1,mid;
            if(nums[l]<nums[r]) return nums[l];
            while(l<r){
                mid=(r+l)/2;
                if(nums[mid]>nums[mid+1]) return nums[mid+1];
                else{
                    if(nums[mid] >= nums[l])
                        l=mid+1;
                    else r=mid;
                }
            }
            return nums[l];
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}