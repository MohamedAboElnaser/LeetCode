#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int l=0,r=arr.size()-1,mid;
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        mid=r/2;
        while(l<=r){
            if(arr[mid]<arr[mid+1]){
                l=mid+1;
            }else r=mid-1;

            mid=l+(r-l)/2;
        }
        return mid;
    }
};
int main(){
            

    return 0;
}