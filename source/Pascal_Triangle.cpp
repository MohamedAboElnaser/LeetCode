#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>anser(numRows);
      for(int i=0;i<numRows;i++)
            anser[i].resize(i+1,1);
        
        for(int i=2;i<numRows;i++)
            for(int j=1;j<anser[i].size()-1;j++)
                anser[i][j]=anser[i-1][j-1]+anser[i-1][j];
    return anser;  
    }
};
int main(){
    Solution s;
    vector<vector<int>> v=s.generate(6);
    for(int i=0;i<6;i++){
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
    return 0;
}