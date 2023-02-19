#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
      
        rev(matrix);    
    }
    void rev(vector<vector<int>>&matrix){
        for(auto &v: matrix) reverse(v.begin(),v.end());
    }
};
int main(){
      
     
    return 0;

}