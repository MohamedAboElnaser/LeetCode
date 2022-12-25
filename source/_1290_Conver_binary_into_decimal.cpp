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
    int getDecimalValue(ListNode* head) {
        deque<int>num;
        int ans=0;
        while(head){
            num.push_front(head->val);
            head=head->next;
        }
        for(int i=0;i<num.size();i++)
            ans+=(num[i]*pow(2,i));
        return ans;
    }
};
int main(){
    
    return 0;
}