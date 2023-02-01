#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int siz=nums.size();
        
        if(siz<=2)return nums;
        vector<int>ans;
        map<int,int>freq;
        for(int &i: nums)
            freq[i]++;
        
        for(int i=0;i<siz;i++)
            if(siz/3 < freq[nums[i]]){
                ans.push_back(nums[i]);
                freq[nums[i]]=-1;
            }
            
        return ans;

    }
};
int main(){
    Solution s;
    vector<int>nums{1,2};
    vector<int>ans=s.majorityElement(nums);
    for(int &i: ans)cout<<i<<" ";
    return 0;

}