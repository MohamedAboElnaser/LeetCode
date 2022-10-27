#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
     int c=0;
     for(int i=0;i<startTime.size();i++){
       if(startTime[i]<=queryTime && endTime[i] >=queryTime) c++ ;
     } 
     return c;  
    }
};
int main(){
    Solution s;
    vector<int>startTime{1,2,3}; //4
    vector<int>endTime  {3,2,7};
    cout<<s.busyStudent(startTime,endTime,4);
    return 0;
}