#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int size=num.size();
        int sum,carry=0;
        vector<int>ans;
        for(int i=size-1;i>=0;i--){
            sum=(num[i]+(k%10));
            ans.push_back((sum+carry)%10);
            carry=(sum+carry)/10;
            k/=10;                  
        }
         k+=carry;
        while( k){
            ans.push_back(k%10);
            k/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    vector<int>num{0};
    vector<int>ans;

     Solution s;
     ans=s.addToArrayForm(num,10000);
     for(auto i: ans)cout<<i<<" ";
     
    return 0;

}