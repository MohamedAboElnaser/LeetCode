#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findLucky(vector<int>& arr){
        map<int ,int >m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
            int ans=-1;
        for( auto it=m.rbegin();it!=m.rend();it++){
            if(it->first==it->second){
                ans=it->first;
                break;
            }
        }
        return ans;
    }
};
int main(){
    Solution  s;
    vector<int>arr{2,2,3,4};
    cout<<s.findLucky(arr);
    return 0;
}