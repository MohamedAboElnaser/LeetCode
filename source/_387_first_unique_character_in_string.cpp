#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int siz=s.size();
        map<char,int> m;
        for(int i=0;i<siz;i++)
            m[s[i]]++;
        
        for(int i=0;i<siz;i++)
            if(m[s[i]]==1) return i;

        return -1;
    }   
};
int main(){
    string s="loveleetcode";
    Solution so;
    cout<<so.firstUniqChar(s);
    return 0;
}