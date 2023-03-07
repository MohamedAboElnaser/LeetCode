#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
       int ans=-1;
       int  smallest_manhattan=INT_MAX;
       for(int i=0;i<points.size();i++){
           if(points[i].at(0)==x || points[i].at(1)==y){
             int temp= manhattan(x,y,points[i].at(0),points[i].at(1)) ;
             if(temp<smallest_manhattan){
                 ans=i;
                 smallest_manhattan=temp;
             }
                 
             
           }
       } 
       return ans;
    }
    int manhattan(int x,int y,int X,int Y){
        return abs(x-X)+abs(y-Y);
    }
};
int main(){

    return 0;

}