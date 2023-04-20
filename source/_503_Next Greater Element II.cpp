#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        stack<int>s;
        for(int i=n-1;i>=0;i--)s.push(nums[i]);

        for(int i=n-1;i>=0;i--){
            while(!s.empty()&& s.top()<=nums[i]) s.pop();
            if(s.empty())   ans[i]=-1;
            else            ans[i]=s.top();
            s.push(nums[i]);
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