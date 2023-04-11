#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string ans="";
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        for(char c: s){
            if(c!='*')
                ans+=c;
            else 
                ans.pop_back();
        }
        return  ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}