#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int siz=s.size();
        for(int i=0;i<siz/2;i++)
            swap(s[i],s[siz-i-1]);
    }
};
int main(){
        vector<char>s{'a','b','c','d'};
        Solution so;
        so.reverseString(s);
        for(auto i: s)cout<<i<<" ";
    return 0;
}