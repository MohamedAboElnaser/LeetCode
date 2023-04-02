#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int>row,col;
        int siz=matrix.size();
        for(int i=0;i< siz;i++){
            for(int j=0;j<siz;j++){
                if(row.find(matrix[i][j])!=row.end())//means that element exist in the row;
                    return false;
                else row.insert(matrix[i][j]);
                if(col.find(matrix[j][i])!=col.end()) return false;
                else col.insert(matrix[j][i]);
            }
            col.clear();
            row.clear();
        
        }
        return true;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}