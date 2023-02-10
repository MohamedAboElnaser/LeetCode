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
   bool ans=true;
    bool isBalanced(TreeNode* root) {
         
            hight(root);
        return ans;
    }
    int hight(TreeNode* root){        
        if(!root) return 0;
        
        int lh=hight(root->left);
        int rh=hight(root->right);
        
        if(abs(lh-rh)>1) ans=false;
        
        return  max(lh,rh)+1;
    }
};
int main(){
    
         
    return 0;

}