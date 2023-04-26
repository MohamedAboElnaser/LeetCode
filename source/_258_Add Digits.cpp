#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int s=0;
       while(num>9){
            while(num){
                s+=num%10;
                num/=10;
            }
          num=s;
          s=0;  
       }
       return num;
             
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}