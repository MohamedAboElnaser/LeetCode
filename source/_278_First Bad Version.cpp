#include <bits/stdc++.h>
using namespace std;

    // The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int x){
    return true;
}
class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,r=n,mid,ans=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(isBadVersion(mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}