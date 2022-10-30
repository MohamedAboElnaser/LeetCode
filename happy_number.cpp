#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        
         
        else{
            set<int>s;
            int newNum=n;
            while(true){
                newNum=sumSquare(newNum);
                if(newNum==1) return true;
                else{
                    if(s.find(newNum)!=s.end()) //this mean the num is exist in the set & i will enter endless loop
                        return false;
                    else
                        s.insert(newNum);
                }       
            }
        }
    }
    int sumSquare(int a){
        int ans=0;
        while(a){
            ans+=((a%10)*(a%10));
            a/=10;
        }
        return ans;
    }
};
int main(){
    Solution s;
    cout<<s.isHappy(200);
    return 0;
}