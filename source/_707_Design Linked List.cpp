#include <bits/stdc++.h>
using namespace std;
class MyLinkedList {
public:
     deque<int>l; 
    MyLinkedList() {
       
    }
    
    int get(int index) {
        if(index<l.size())return l[index];
        else return -1;   
    }
    
    void addAtHead(int val) {
       l.emplace_front(val); 
    }
    
    void addAtTail(int val) {
        l.emplace_back(val);
    }   
    
    void addAtIndex(int index, int val) {
         if(index==l.size()) l.emplace_back(val);
         else if(index>l.size())return ;
         else{
             l.insert(l.begin()+index,val);
         } 
    }
    
    void deleteAtIndex(int index) {
        if(index<l.size())
            l.erase(l.begin()+index);
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}