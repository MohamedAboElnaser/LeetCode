#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//  number-soldiers, index 
        vector<pair<int,int>>v;
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            int numberOfSoldires=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j])
                    numberOfSoldires++;
                else j=mat[i].size(); 
            }
            v.push_back({numberOfSoldires,i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++)
            ans.push_back(v[i].second);
        
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