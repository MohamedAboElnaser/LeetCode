#include <bits/stdc++.h>
using namespace std;

    class MinStack {
    //curr_vla     cur_min
     stack<pair<int,int>>s;
     int _min=INT_MAX;
    public:
        
        MinStack() {
            
        }
        
        void push(int val) {
            if(s.empty())s.push({val,val});
            else{
               _min=min(s.top().second,val);
               s.push({val,_min}); 
            }
        }
        
        void pop() {
            s.pop();
            
        }
        
        int top() {
          return s.top().first;  
        }
        
        int getMin() {
          return s.top().second;  
        }
    
    };

    /**
    * Your MinStack object will be instantiated and called as such:
    * MinStack* obj = new MinStack();
    * obj->push(val);
    * obj->pop();
    * int param_3 = obj->top();
    * int param_4 = obj->getMin();
    */
int main(){
      
     
    return 0;

}