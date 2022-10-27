#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int h=max(0,gain[0]);
      for(int i=1;i<gain.size();i++){
            gain[i]+=gain[i-1];
            h=max(h,gain[i]);
      } 
      return h; 
    }
};
int main(){
    vector<int>gain{-4,-3,-2,-1,4,3,2};
    Solution s;
    cout<<s.largestAltitude(gain);
    return 0;
}