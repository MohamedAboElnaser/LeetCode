#include <bits/stdc++.h>
using namespace std;

 
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


 
  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 
class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root==nullptr)return false;//there is no tree;
        return findSubPath(head,root) || isSubPath(head,root->left)|| isSubPath(head,root->right);
    }
    bool findSubPath(ListNode* head , TreeNode* root){
        if(head==nullptr)return true;//there is no list;
        if(root==nullptr)return false;
        return head->val==root->val&&(findSubPath(head->next,root->left)||findSubPath(head->next,root->right));
    }
};
int main(){
     
     
    return 0;

}