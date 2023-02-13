#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int siz=nums.size();
        if(siz<=2)return true;
        bool is_increasing=true;
        if(nums[0]>nums[siz-1]) is_increasing=false;
        for(int i=0;i<siz-1;i++)
        {
            if(is_increasing)
                if(nums[i]>nums[i+1])return false;
            if(!is_increasing)
                if(nums[i]<nums[i+1])return false;
        }
        return true;
    }
};
int main(){
    
    return 0;
}