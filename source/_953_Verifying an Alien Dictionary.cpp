#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>m;
        for(int i=0;i<order.size();i++)
            m[order[i]]=i;
        
        for(int i=0;i<words.size()-1;i++){
            int j=0;
            while(j<words[i].size() && j<words[i+1].size()){

                if(m[words[i][j]]<m[words[i+1][j]]) break;

                if(m[words[i][j]]>m[words[i+1][j]]) return false;
                    j++;
                
            }
            if(j==words[i+1].size()&& j<words[i].size())return false;
        }
        return true;
            
    }
};
int main(){
            

    return 0;
}