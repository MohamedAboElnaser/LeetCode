#include <bits/stdc++.h>

using namespace std;
 class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int siz=matrix.size();
        int s=0;
        for(int i=0;i<siz;i++){
            s=matrix[i].size();
            int l=0,r=s-1,mid;
            while(l<=r){
                mid=(l+r)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]>target) r=mid-1;
                else l=mid+1;
            } 
        }
        return false;
    }
};
int main(){
    vector<vector<int>>mat{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    Solution s;
    cout<<s.searchMatrix(mat,5);
    return 0;

}