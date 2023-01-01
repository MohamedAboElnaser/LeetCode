#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m;
        int mz=magazine.size();
        int rz=ransomNote.size();
        if(mz<rz) return false;
        for(int i=0;i<mz;i++)
            m[magazine[i]]++;
        for(int i=0;i<rz;i++)
            if(m[ransomNote[i]]>0)
            {
              m[ransomNote[i]]--;  
            }
            else{
                return false;
            }
        
        return true;
    }
};

int main(){  
    return 0;
}