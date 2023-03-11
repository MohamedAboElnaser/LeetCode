#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        int siz=mat.size();
         for(int i=0;i<siz;i++){
             s+=mat[i][i];
             s+=mat[i][siz-1-i];
         } 
         if(siz&1)s-=mat[siz/2][siz/2];
         return s; 
    }
};


int main(){
     
    return 0;

}