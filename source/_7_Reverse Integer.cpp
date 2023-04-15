#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
       long r=0;
       while(x){
           r*=10;
           r+=x%10;
           x/=10;
       } 
       if(r>INT_MAX || r<INT_MIN) return 0;
       return r;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}