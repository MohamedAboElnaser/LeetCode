#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<int,int>m;
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        bool is_nums1_long=false;
        vector<int> result;
        if(nums1.size()>nums2.size()){
            readThisArray(nums1); 
            is_nums1_long=true ;
        }
        else
            readThisArray(nums2);
        
        
        if(is_nums1_long){   
            for(int i=0;i<nums2.size();i++){
                if(m[nums2[i]]){
                     result.push_back(nums2[i]);
                     m[nums2[i]]--;
                   }
            }
        }
        else{
           for(int i=0;i<nums1.size();i++){
                if(m[nums1[i]]){
                     result.push_back(nums1[i]);
                     m[nums1[i]]--;
                   }
            } 
        }
        return result;
    }
    void readThisArray(vector<int>&num){
        for(int i=0;i<num.size();i++)
            m[num[i]]++;
    }
};
int main(){
   Solution s;
   vector<int>nums1{1,2,2,1};
   vector<int>nums2{2,2};
   vector<int> ans;
    ans=s.intersect(nums1,nums2);

    for(auto i: ans) cout<<i<<" ";
    return 0;
}