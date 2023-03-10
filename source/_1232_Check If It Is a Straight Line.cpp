#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
         if(coordinates.size()<=2)return true;
          sort(coordinates.begin(),coordinates.end());
         double slop=((double)(coordinates[1].at(1)-coordinates[0].at(1))/((double)(coordinates[1].at(0)-coordinates[0].at(0))));
         for(int i=2;i<coordinates.size();i++) 
            if(!is_equal(slop,coordinates[i-1][0],coordinates[i-1][1],coordinates[i][0],coordinates[i][1])) return false;

        return true;
    }
    bool is_equal(double slop,int x,int y,int X,int Y){
        if(abs(((double)(Y-y)/(double)(X-x)))!=abs(slop))return false;
        return true;
    }
};


int main(){
    Solution s;
    vector<vector<int>>v{{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    cout<<s.checkStraightLine(v);
    return 0;

}