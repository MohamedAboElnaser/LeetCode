#include <bits/stdc++.h>
using namespace std;

    class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int l=0,r=arr.size()-1,mid;
       while(l<=r){
           mid=l+(r-l)/2;
           if((arr[mid]-( mid+1)<k))
                l=mid+1;
            else 
                r=mid-1;
       } 
       return l+k;
    }

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}