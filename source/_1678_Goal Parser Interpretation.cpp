#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    string interpret(string command) {
       string ans="";
       int siz=command.size();
       for(int i=0;i<siz;i++){
           if(command[i]=='G')
            ans+="G";
            else if(command[i]=='('){
                if(command[i+1]==')'){
                    ans+="o";
                    i++;
                }
                else{
                    ans+="al";
                    i+=3;
                }
            }
       }
       return ans; 
    }
};
int main(){
            

    return 0;

}