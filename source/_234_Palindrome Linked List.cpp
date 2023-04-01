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
    bool isPalindrome(ListNode* head) {
        vector<ListNode*>v;
        auto temp=head;
        while(temp){
            v.push_back(temp);
            temp=temp->next;
        }
        int n=v.size();
        for(int i=0;i<(n/2);i++){
            if(v[i]->val!=v[n-1-i]->val)return false;

        }return true;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}