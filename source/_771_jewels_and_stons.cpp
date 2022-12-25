#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      
       map<char,int>m;
       int n=0;
       for(int i=0;i<jewels.size();i++)
            m[jewels[i]]++; 
        for(int i=0;i<stones.size();i++){
            if(m[stones[i]]) n++;
        } 
        return n;
    }
};
int main(){
    Solution s;
    int ans=s.numJewelsInStones("z","ZZ");
    cout<<ans<<'\n';
    return 0;
}