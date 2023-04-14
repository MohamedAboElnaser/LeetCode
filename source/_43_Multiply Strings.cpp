#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
       if(num1=="0" || num2=="0") return "0";

       vector<int>res(num1.size()+num2.size(),0);

       for(int i=num1.size()-1;i>=0;i--){
           for(int j=num2.size()-1;j>=0;j--){
               res[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
               res[i+j]+= res[i+j+1]/10;
               res[i+j+1]%=10;
           }
       }
       string ans="";
       int i=0;
       while(res[i]==0)i++;
       for(;i<res.size();i++)  ans+= to_string(res[i]);
       return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}