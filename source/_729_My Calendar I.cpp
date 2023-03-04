#include <bits/stdc++.h>
using namespace std;
class MyCalendar {
public:
    // start end 
    map<int,int>m;
    MyCalendar(){
        
    }
    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        if(validEvent()) return true;
        else{
            m[start]--;
            m[end]++;
            return false;
        }
    }
    bool validEvent(){
        auto it=m.begin();
        int c=0;
        for(;it!=m.end();it++){
            c+=it->second;//it must be negative 
        if (c>1) return false;
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
int main(){
      
     
    return 0;

}