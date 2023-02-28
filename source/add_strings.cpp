#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1,j=num2.size()-1;
        string ans="";
        int carry=0;
            while(i>=0 || j>=0){
                int a=(i<0)?0:num1[i]-'0';
                int b=(j<0)?0:num2[j]-'0';
                int sum=a+b+carry;
                ans+=to_string(sum%10);
                carry=sum/10;
                i--,j--;
            }
            if(carry){
                ans+=to_string(carry);
            }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};
int main()
{
     
   
     return 0;
}