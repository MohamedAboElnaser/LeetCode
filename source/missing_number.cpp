#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>&nums) {
        int sum=0;
        int siz=nums.size();
        for(int i=0;i<siz;i++)
            sum+=nums[i];
        siz++;
         int sumation=(siz *(siz-1))/2;

        return sumation-sum;
    }      
};
 

int main(){
   vector<int>nums{0,1};
   Solution s;
   cout<<s.missingNumber(nums); 
    return 0;
}