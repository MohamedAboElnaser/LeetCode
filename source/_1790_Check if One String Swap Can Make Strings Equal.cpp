#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int ans=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
                ans++;
        }
        if(ans==0)return true;
        else{
            if(ans==2){
                sort(s1.begin(),s1.end());
                sort(s2.begin(),s2.end());
                if(s1==s2)return true;
                else return false;
            }
        }
         return 0;
    }
};




int main(){

    return 0;

}