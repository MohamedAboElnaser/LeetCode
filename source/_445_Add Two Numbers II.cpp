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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      stack<ListNode*>s1;
      stack<ListNode*>s2;
      get_nodes(s1,l1);
      get_nodes(s2,l2);

      int carry=0;
      vector<ListNode*>ans;
      while((!s1.empty()) || (!s2.empty()) ) {
            if((!s1.empty()) && (!s2.empty()) ){
                int val=s1.top()->val+s2.top()->val;
                s1.pop();s2.pop();
                val+=carry;
                ListNode* temp=new ListNode(val%10);
                ans.push_back(temp);
                carry=val/10;
            }
            else if(!s1.empty()){
                int val=s1.top()->val ;
                s1.pop(); 
                val+=carry;
                ListNode* temp=new ListNode(val%10);
                ans.push_back(temp);
                carry=val/10; 
            }
            else{
                 int val=s2.top()->val;
                 s2.pop();
                val+=carry;
                ListNode* temp=new ListNode(val%10);
                ans.push_back(temp);
                carry=val/10;
            }
        }
        if(carry){
            ListNode * temp=new ListNode(carry);
            ans.push_back(temp);
        }
        for(int i=ans.size()-1;i>=1;i--){
            ans[i]->next=ans[i-1];
        }
        ans[0]->next=nullptr; 
        return ans[ans.size()-1];
    }

    void get_nodes(stack<ListNode*>&s,ListNode* l){
        ListNode* temp=l;
        while(temp){
            s.push(temp);
            temp=temp->next;
        }
    }
};

int main(){
      
     
    return 0;

}