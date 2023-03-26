#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
            int a2_siz=arr2.size();
            int ans=arr1.size();
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<a2_siz;j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    ans--;
                    j=a2_siz;
                }
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