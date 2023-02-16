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
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        in_order(root,v);
        int size=v.size();
        for(int i=1;i<size;i++){
            if(v[i]<=v[i-1])return false;
        }
        return true;
    }
    void in_order(TreeNode* root,vector<int>&v){
       if(root==nullptr)return ;
       in_order(root->left,v) ;
       v.push_back(root->val);
       in_order(root->right,v);
    }
};
int main(){
      
     
    return 0;

}