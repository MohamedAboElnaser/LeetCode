#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
         long long l=0,r=sqrt(c);
        long long temp;
        while(l<=r){
           temp=l*l+r*r;
            if(temp==c)return true;

            if(temp>c)r--;
            else l++;
        }
        return false;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);   
    return 0;
}