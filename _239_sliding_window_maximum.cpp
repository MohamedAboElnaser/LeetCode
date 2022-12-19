#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int >ans;

       multiset<int>s;
       for(int i=0;i<k;i++){
        s.insert(-nums[i]); // to let the maximum number in the beginning of the set with negative value
       } 

       ans.push_back(-*s.begin());

       for(int i=k;i<nums.size();i++){
        s.erase(s.find(-nums[i-k]));
        s.insert(-nums[i]);
        ans.push_back(-*s.begin());
       }
       return ans;

    }
};
int main (){
    vector <int>nums{1 };
    int k=3;
    Solution s;
    vector<int>ans=s.maxSlidingWindow(nums,1);
    for(auto &i: ans )cout<<i<<" ";
    return 0;
}