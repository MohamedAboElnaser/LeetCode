#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=0;  i*i<=num ;i++)
        {
            if(i*i==num)return true;
        }
        return false;
    }
     
};
int main(){
    Solution s;
    cout<<s.isPerfectSquare(14);
    return 0;
}