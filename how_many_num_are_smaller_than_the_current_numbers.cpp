#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      vector<int >temp=nums;
      vector<int>ans;
      int siz=nums.size();
      sort (temp.begin(),temp.end());
      vector<pair<int,int>>v;
      for(int i=0;i<siz;i++) 
        v.push_back({temp[i],i});
    for(int i=0;i<siz;i++){
        for(int j=0;j<siz;j++)
        if(nums[i]==v[j].first){
            ans.push_back(v[j].second);
            j=siz;
        }
    }
    return ans;
    }
};
int main(){
    Solution s;
    vector<int >nums{7,7,7,7};
    vector<int>ans=s.smallerNumbersThanCurrent(nums);
    for(auto &i:  ans)cout<<i<<" ";
    return 0;
}