#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int gcd=__gcd(2,n);
        return 2*(n/gcd); 
    }
};
int main(){
    
    return 0;
}