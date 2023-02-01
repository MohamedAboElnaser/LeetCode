#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int siz=nums.size();
       if(siz<=1) return ;
        int i=0,j=0;
        while(i<siz){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
                
            }
             i++;
        }

        
    }
   
};
int main(){
 
    return 0;

}