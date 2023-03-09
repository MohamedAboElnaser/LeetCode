#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums2.size() ;i++){
            m[nums2[i]]=-1;
            for(int j=i+1;j<nums2.size();j++){
                if(nums2[j]>nums2[i]){
                   m[nums2[i]]=nums2[j];
                    j=nums2.size();
                }
            }
        }
        for(int i: nums1)
            ans.push_back(m[i]); 
            
        return ans;
    }
};
 

 



int main(){

    return 0;

}