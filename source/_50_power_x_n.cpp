#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    double myPow(double x, long long n) {
        return (n<0)?1.0/power(x,-n):power(x,n); 
    }
    double power(double x,long long n){
        if(n<=0) return 1;
        double temp=power(x,n>>1);
        return (n&1) ?x*temp*temp:temp*temp; 
    }
};
int main(){
    Solution s;
    cout<<s.myPow(2.1,3);
    return 0;
}