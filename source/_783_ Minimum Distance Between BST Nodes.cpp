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
    int minDiffInBST(TreeNode* root) {
      vector<int>v;
      in_order(v,root);
      int size=v.size();
      int ans=100001;
      for(int i=1 ;i<size;i++)
        ans=min(ans,(v[i]-v[i-1]));
    return ans;
    }
    void in_order(vector<int>&v,TreeNode* root){
        if(root==nullptr)return ;
        in_order(v,root->left);
        v.push_back(root->val);
        in_order(v,root->right);
    }
};
int main(){
      
     
    return 0;

}