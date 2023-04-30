#include <bits/stdc++.h>
using namespace std;
class MyCircularQueue {
public:
    queue<int>q;
    int K;
    MyCircularQueue(int k) {
      K=k;  
    }
    
    bool enQueue(int value) {
        if(q.size()<K){
            q.push(value);
            return true;
        }
        else return  false;
    }
    
    bool deQueue() {
       if(!q.empty()){
           q.pop();
           return true;
       }else
       return false; 
    }
    
    int Front() {
       if(q.empty())return -1;
       return q.front(); 
    }
    
    int Rear() {
       if(q.empty())return -1;
       return  q.back(); 
    }
    
    bool isEmpty() {
        return q.empty();
    }
    
    bool isFull() {
        return (K==q.size());
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}