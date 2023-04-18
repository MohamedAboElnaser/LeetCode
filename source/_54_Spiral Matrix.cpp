#include <bits/stdc++.h>
using namespace std;

 class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty())return {};
        vector<int>ans;
        int r=matrix.size(),c=matrix[0].size();
        int left=0,right=c-1;
        int top=0,bottom=r-1;

        while(left<=right && top<=bottom){
            //go to right
            for(int col=left;col<=right;col++)
                ans.push_back(matrix[top][col]);
            top++;

            //go to bottom
            for(int row=top;row<=bottom;row++)
                ans.push_back(matrix[row][right]);
            right--;
            
            
            //go to left if needed;
            if(top<=bottom){
                for(int col=right;col>=left;col--)
                    ans.push_back(matrix[bottom][col]);
             bottom--;
            }
           
           //got to up if needed
           if(left<=right){
               for(int row=bottom;row>=top;row--)
                    ans.push_back(matrix[row][left]);
               left++;
               }
            
        }
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}