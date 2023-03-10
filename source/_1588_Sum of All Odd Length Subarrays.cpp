#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0,n=arr.size();
        for(int i=0;i<n;i++)
             res += ((i + 1) * (n - i) + 1) / 2 * arr[i];
        return res;
    }
};
/**
 class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
            for(int j=i;j<arr.size();j++)
                for(int k=i;k<=j;k++)
                    if((i+j)%2==0)
                        sum+=arr[k];
        return sum;
    }
}; 
 
*/

 



int main(){

    return 0;

}