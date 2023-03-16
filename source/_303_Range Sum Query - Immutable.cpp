#include <bits/stdc++.h>
using namespace std;
 
class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        
        v.push_back(nums[0]);    
        for(int i=1;i<nums.size();i++){
            v.push_back(v[i-1]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)return v[right];
        return v[right]-v[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
int main(){
            

    return 0;
}