#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(auto &i: nums){
            if(i==0)return 0;
            if(i<0) ans*=-1;
        }
        return ans;
    }
};




int main(){

    return 0;

}