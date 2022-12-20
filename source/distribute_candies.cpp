#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int,int>m;
        int temp;
        int siz=candyType.size();
        for(int i=0;i<siz;i++){
            temp=candyType[i];
            m[temp]++;
        }
        if(m.size()>(siz/2))
            return (siz/2);
        else    
           return m.size(); 
    }
};
int main(){
    vector<int>c{1,1,2,3};
    Solution s;
    cout<<s.distributeCandies(c);
    return 0;
}//Done:)