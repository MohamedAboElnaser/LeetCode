#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int siz=arr.size();
        if(siz==0 || siz==1) // do not do any thing
            return ;
        vector<int>ans;
        int j;
        for(int i=0,j=0;j<siz,i<siz;j++,i++){
            if(arr[i]!=0){
                ans.push_back(arr[i]);
            }
            else{
                ans.push_back(0);
                if(j!=siz-1)// to handel the case wher i reach the last element and it is = 0
                {
                    ans.push_back(0);
                    j++;
                }
            }
        }
        for(int i=0;i<siz;i++)
        arr[i]=ans[i];
    }
};
int main(){
    vector<int>arr{1,0,2,3,0,4,5,0};
    Solution s;
    s.duplicateZeros(arr);
    for(auto  i: arr) cout<<i<<" ";
    
    return 0;
}