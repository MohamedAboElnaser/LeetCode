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
    void reorderList(ListNode* head) {
       if((!head) || (!head->next) || (!head->next->next))return ;

       stack<ListNode*>s;
       ListNode* t=head;
       while(t){
           s.push(t);
           t=t->next;
       } 
       int siz=s.size();

       ListNode* temp=head;
       for(int i=0;i<siz/2;i++){
           ListNode* newElement=s.top();
           s.pop();
           newElement->next=temp->next;
           temp->next=newElement;
           temp=temp->next->next;
       }
       temp->next=nullptr;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}