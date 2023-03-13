#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    string toLowerCase(string s) {
       string ans="";
       for(char c: s){
        if(c>=65 && c<=90)
            ans+=(char)(c+32);
        else 
            ans+=c;
       }
       return ans;
    }
};
int main(){
            

    return 0;

}