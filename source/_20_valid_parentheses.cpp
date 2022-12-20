#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        int siz=s.size();
        for(int i=0;i<siz;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                p.push(s[i]);
            else{
                if(p.empty()) return false;
                else
                    if(pair(p.top(),s[i])==false) return false;
                p.pop();
               
            }
        }
        if(p.empty())return true;
        else return false;
       }
    bool pair(char a,char b){
        if(a=='(' && b==')') return true;
        if(a=='{' && b=='}') return true;
        if(a=='[' && b==']') return true;
        return false;
    }     
};
int main(){
    Solution s;
    cout<<s.isValid("[)]");
    return 0;
}