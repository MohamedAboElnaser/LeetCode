#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> m;
        //          frq  num
        vector<pair<int,int>>v;
        vector<int>ans;
        for(auto &i:nums)
            m[i]++;
        for(auto &j:m)
            v.push_back({j.second,j.first});
        
        sort(v.begin(),v.end(),com);
        int siz=v.size();
        for(int i=0;i<siz;i++){
            int s=v[i].first;
            for(int j=0;j<s;j++)
             ans.push_back(v[i].second);   
        }
        
        return ans;
    }
    static bool com(pair<int ,int>p1,pair<int,int>p2){
        if(p1.first<p2.first)return true;
        if(p1.first==p2.first){
            if(p1.second>p2.second)return true;
            else return false;
        }
        return false;
    }
}; 
int main(){
     vector<int>nums{2,3,1,3,2};
     Solution s;
     vector<int>ans;
     ans=s.frequencySort(nums);
     for(auto &i: ans)cout<<i<<" ";

    return 0;

}