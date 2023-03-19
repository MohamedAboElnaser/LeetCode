#include <bits/stdc++.h>
using namespace std;
      
class Solution {
public:
    int mySqrt(int x) {
      long long i;
      for(i=0;i*i<=x;i++)
        if(i*i==x)return i;
     return i-1;
    }

};

int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);  
    return 0;
}