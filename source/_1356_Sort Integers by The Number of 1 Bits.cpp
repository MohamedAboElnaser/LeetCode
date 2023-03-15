#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    //    nofBits  num
        vector<pair<int,int>>v;
        for(auto &i: arr){
            v.push_back({countBits(i),i});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto &i: v)
            ans.push_back(i.second);
        return ans;
    }
    int countBits(int x){ 
    int c=0;
    while(x){
        c++;
        x&=x-1;
    }
    return c;
}
};
int main(){
            

    return 0;
}