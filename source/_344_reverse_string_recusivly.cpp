#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size()-1;
        revers(s,0,size);
         
    }
    void revers(vector<char>&s ,int indx,int siz){
        if(indx>siz)return ;
        
        revers(s,indx+1,siz-1);
             swap(s[indx],s[siz]);
        
    }
};
int main(){
    
         
    return 0;

}