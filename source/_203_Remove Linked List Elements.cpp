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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)return NULL;

        if(head->val==val)return removeElements(head->next,val);

        head->next=removeElements(head->next,val); 
        return head;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}   