#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
      int rows=grid.size(),n_ofNegativ=0;
      int colu=grid[0].size();
      for(int i=0;i<rows;i++){
          int temp=0;
          for(int j=colu-1;j>=0;j--){
              if(grid[i][j]<0)
                temp++;
                else j=-1;
          }
          n_ofNegativ+=temp;
      } 
      return n_ofNegativ; 
    }

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}