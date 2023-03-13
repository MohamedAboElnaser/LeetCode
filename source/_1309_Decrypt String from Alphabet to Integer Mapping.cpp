#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    string freqAlphabets(string s) {
       string ans="";
       int siz=s.size();

       for(int i=0;i<siz;i++){// in case the size >2
            if(i<siz-2 && s[i+2]=='#'){
             int num=(int)((s[i]-'0'))*10+(int)(s[i+1]-'0');
             num--;
             ans+=('a'+num);
             i+=2;
            }
            else{
                int n=s[i]-'0'-1;
                ans+='a'+n;
            }  
       } 
       return ans;
    }
};
int main(){
            

    return 0;

}