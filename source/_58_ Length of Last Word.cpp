#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
       bool pass_the_first_space=false;
       int c=0;
       int size=s.size();
       for(int i=size-1;i>=0;i--){
            if(s[i]==' '&& !pass_the_first_space){
                continue;
            }
            else pass_the_first_space=true;
        if(s[i]!=' ')c++;
        else break;
       } return c;
    }
};
int main(){
      
     
    return 0;

}