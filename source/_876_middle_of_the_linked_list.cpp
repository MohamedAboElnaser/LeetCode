#include <bits/stdc++.h>

using namespace std;
 
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       deque<ListNode*>n;
       while(head){
        n.push_back(head);
        head=head->next;
       }
       int siz=n.size();
       return n[(siz)/2];
    }
}; 
int main(){
    
    return 0;

}