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
 
class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        pre_order(root,ans);
        return ans;
    }
    void pre_order(TreeNode* curr,vector<int>&ans){
        if(!curr) return ; 
        ans.push_back(curr->val);
        pre_order(curr->left,ans);
        pre_order(curr->right,ans);  
    }
};
int main(){
    
      
    return 0;

}