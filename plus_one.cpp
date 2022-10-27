#include <iostream>
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size()==1){
            if(digits[0]<9) 
                {digits[0]++;
            return digits;
            }
        }
        vector<int> v;
         int rem=1;
         int i=0;
         int j=digits.size()-1;
         while(rem>0 && j>=0 ){
            v.push_back((rem+digits[j])%10);
            rem=(digits[j]+rem)/10;
            j--;
         } 
            if(j>=0){
                for(int i=j;i>=0;i--)
                    v.push_back(digits[i]);
            }
            else{
                if(rem==1)
                v.push_back(rem);
            }
            reverse(v.begin(),v.end());
            return v;
    }
};
int main(){
     Solution s;
     vector<int>digits{8,9,9,9};
     vector<int> v ;
     v=s.plusOne(digits);
     for(auto i : v)cout<<i<<" ";
     
    return 0; 
}