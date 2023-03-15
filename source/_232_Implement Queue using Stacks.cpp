#include <bits/stdc++.h>
using namespace std;
class MyQueue {
private:
    stack<int>s1,s2;
    
    void move(stack<int>&s1,stack<int>&s2){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        move(s1,s2);
        s1.push(x);
        move(s2,s1);
    }
    
    int pop() {
       int ans=s1.top();
       s1.pop();
       return ans;
    }
    
    int peek() {
       return s1.top(); 
    }
    
    bool empty() {
        return(s1.empty());
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main(){
            

    return 0;
}