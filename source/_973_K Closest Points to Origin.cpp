#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,pair<int,int>>>ans;
        for(auto i:points){
            int dis=i[0]*i[0]+i[1]*i[1];
            ans.push_back({dis,{i[0],i[1]}});
        }
         
        sort(ans.begin(),ans.end());
        vector<vector<int>>sol;
        for(int i=0;i<k;i++)
            sol.push_back({ans[i].second.first,ans[i].second.second});

        return sol;
    }
    
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}