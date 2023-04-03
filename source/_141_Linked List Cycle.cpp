#include <bits/stdc++.h>
using namespace std;

 
   struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto temp=head;
        map<ListNode*,int>m;
        
        while(temp){
            if(m[temp])return true;
            m[temp]++;
            temp=temp->next;
        }
        return false;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}   