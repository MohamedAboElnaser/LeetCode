#include <bits/stdc++.h>
using namespace std;
 class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m=l.size(),n=nums.size();
        vector<bool>ans;

        for(int i=0;i<m;i++){
          vector<int>v;
          for(int j=l[i];j<=r[i];j++)
            v.push_back(nums[j]);
            
        sort(v.begin(),v.end());
        int step=v[1]-v[0];
        int flag=true;
        for(int j=1;j<v.size()-1;j++){
            if(v[j]+step!=v[j+1]){
                flag=false;

            }
        }
        ans.push_back(flag);
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