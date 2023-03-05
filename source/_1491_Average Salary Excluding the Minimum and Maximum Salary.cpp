#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
       double _max_salary=-1000001,_min_salary=1000001,s=0;
       for(auto &i: salary){
           _max_salary=max(_max_salary,i);
           _min_salary=min(_min_salary,i);
            s+=i;
       }
       s-=_max_salary;
       s-=_min_salary;
       return (s/(salary.size()-2)); 
    }
    double max(double& x,int& y){
        if(x>y)return x;
         return y;
    }
    double min(double& x,int& y){
        if(x<y)return x;
         return y;
    }
};
int main(){
      
     
    return 0;

}