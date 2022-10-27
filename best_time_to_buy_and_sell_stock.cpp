#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxprofit=-1;
      int minprice=100005;
      for(int i=0;i<prices.size();i++)
      {
        minprice=min(minprice,prices[i]);
        maxprofit=max(maxprofit,prices[i]-minprice);
      } 
      return maxprofit;
    }
};
int main(){
    
    return 0;
}