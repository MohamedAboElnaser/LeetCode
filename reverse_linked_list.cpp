#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *Next;
        ListNode *prev=nullptr;
        if(!head)
            return head;

        while(head->next){
           Next=head->next;
            head->next=prev;
            prev=head;
            head=Next;

        }
        head->next=prev;
        
        return head;
    }
    
};

int main()
{
    

    

    return 0;
}